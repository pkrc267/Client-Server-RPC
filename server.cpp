#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <netinet/in.h>
#include <resolv.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <pthread.h>
#include "my.pb.h"
#include <iostream>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl.h>

using namespace std;
using namespace google::protobuf::io;
static uint32_t total = 0;
uint32_t add(uint32_t a, uint32_t b)
{
        total += (a + b);
        return (a + b);
}

uint32_t gettotal(void)
{
        return (total);
}

Return ret;

void *SocketHandler(void *);

const vector<string> explode(const string &s, const char &c)
{
        string buff{""};
        vector<string> v;

        for (auto n : s)
        {
                if (n != c)
                        buff += n;
                else if (n == c && buff != "")
                {
                        v.push_back(buff);
                        buff = "";
                }
        }
        if (buff != "")
                v.push_back(buff);

        return v;
}

int main(int argv, char **argc)
{

        int host_port = 5001;

        struct sockaddr_in my_addr;

        int hsock;
        int *p_int;
        int err;

        socklen_t addr_size = 0;
        int *csock;
        sockaddr_in sadr;
        pthread_t thread_id = 0;

        hsock = socket(AF_INET, SOCK_STREAM, 0);
        if (hsock == -1)
        {
                printf("Error initializing socket %d\n", errno);
                goto FINISH;
        }

        p_int = (int *)malloc(sizeof(int));
        *p_int = 1;

        if ((setsockopt(hsock, SOL_SOCKET, SO_REUSEADDR, (char *)p_int, sizeof(int)) == -1) ||
            (setsockopt(hsock, SOL_SOCKET, SO_KEEPALIVE, (char *)p_int, sizeof(int)) == -1))
        {
                printf("Error setting options %d\n", errno);
                free(p_int);
                goto FINISH;
        }
        free(p_int);

        my_addr.sin_family = AF_INET;
        my_addr.sin_port = htons(host_port);

        memset(&(my_addr.sin_zero), 0, 8);
        my_addr.sin_addr.s_addr = INADDR_ANY;

        if (::bind(hsock, (sockaddr *)&my_addr, sizeof(my_addr)) == -1)
        {
                fprintf(stderr, "Error binding to socket, make sure nothing else is listening on this port %d\n", errno);
                goto FINISH;
        }
        if (listen(hsock, 10) == -1)
        {
                fprintf(stderr, "Error listening %d\n", errno);
                goto FINISH;
        }

        //Now lets do the server stuff

        addr_size = sizeof(sockaddr_in);

        while (true)
        {
                printf("Waiting for a connection\n");
                csock = (int *)malloc(sizeof(int));
                if ((*csock = accept(hsock, (sockaddr *)&sadr, &addr_size)) != -1)
                {
                        printf("---------------------\nReceived connection from %s\n", inet_ntoa(sadr.sin_addr));
                        pthread_create(&thread_id, 0, &SocketHandler, (void *)csock);
                        pthread_detach(thread_id);
                }
                else
                {
                        fprintf(stderr, "Error accepting %d\n", errno);
                }
        }

FINISH:; //oops
}

google::protobuf::uint32 readHdr(char *buf)
{
        google::protobuf::uint32 size;
        google::protobuf::io::ArrayInputStream ais(buf, 4);
        CodedInputStream coded_input(&ais);
        coded_input.ReadVarint32(&size); //Decode the HDR and get the size
        return size;
}

void readBody(int csock, google::protobuf::uint32 siz)
{
        int bytecount;
        Call call;
        char buffer[siz + 4];
        if ((bytecount = recv(csock, (void *)buffer, 4 + siz, MSG_WAITALL)) == -1)
        {
                fprintf(stderr, "Error receiving data %d\n", errno);
        }

        google::protobuf::io::ArrayInputStream ais(buffer, siz + 4);
        CodedInputStream coded_input(&ais);

        coded_input.ReadVarint32(&siz);

        google::protobuf::io::CodedInputStream::Limit msgLimit = coded_input.PushLimit(siz);
        //De-Serialize
        call.ParseFromCodedStream(&coded_input);
        coded_input.PopLimit(msgLimit);
        //Print the message
        cout << "Function " << call.DebugString();
        if (call.name() == "add")
        {
                //uint32_t sum = add(call.args1(), call.args2());
                int arg_array[2];
                cout << "Computing Sum" << endl;
                cout << call.args();
                cout << endl;
                vector<string> v{explode(call.args(), ' ')};
                int i = 0;
                for (auto n : v)
                {
                        arg_array[i] = stoi(n);
                        i++;
                }
                uint32_t sum = add(arg_array[0], arg_array[1]);
                //cout<<sum<<endl;
                ret.set_success(true);
                ret.set_value(to_string(sum));
        }
        else
        {
                uint32_t total = gettotal();
                cout << "Computing Total" << endl;
                cout << endl;
                ret.set_success(true);
                ret.set_value(to_string(total));
        }
}

void writeBody(int csock)
{
        int siz = ret.ByteSize() + 4;
        char *pkt = new char[siz];
        int bytecount;
        google::protobuf::io::ArrayOutputStream aos(pkt, siz);
        CodedOutputStream *coded_output = new CodedOutputStream(&aos);
        coded_output->WriteVarint32(ret.ByteSize());
        ret.SerializeToCodedStream(coded_output);

        if ((bytecount = send(csock, (void *)pkt, siz, 0)) == -1)
        {
                fprintf(stderr, "Error sending data %d\n", errno);
        }
        //printf("Result Sent\n");
        usleep(1);
}

void *SocketHandler(void *lp)
{
        int *csock = (int *)lp;

        char buffer[4];
        int bytecount = 0;
        string output, pl;
        Call call;

        memset(buffer, '\0', 4);

        while (1)
        {
                //Peek into the socket and get the packet size
                if ((bytecount = recv(*csock, buffer, 4, MSG_PEEK)) == -1)
                {
                        fprintf(stderr, "Error receiving data %d\n", errno);
                }
                else if (bytecount == 0)
                        break;
                readBody(*csock, readHdr(buffer));
                writeBody(*csock);
        }

FINISH:
        free(csock);
        return 0;
}

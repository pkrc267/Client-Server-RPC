#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include "my.pb.h"
#include <iostream>
#include <google/protobuf/message.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/zero_copy_stream_impl.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>

using namespace google::protobuf::io;
using namespace std;
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
        Return ret;
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
        ret.ParseFromCodedStream(&coded_input);
        coded_input.PopLimit(msgLimit);
        //Print the message
        //cout<<"Result Recieved"<<endl;
        cout << ret.DebugString() << endl;
        cout << endl;
}
int main(int argv, char **argc)
{

        int host_port;
        char *host_name = (char *)malloc(255);

        cout << "--------Configuring Connection--------\n";
        cout << "Enter IP address of the server: ";
        scanf("%s", host_name);
        cout << "Enter the port number for communication: ";
        cin >> host_port;
        cout << '\n';

        struct sockaddr_in my_addr;

        char buffer[1024];
        int bytecount;
        int buffer_len = 0;

        char obuffer[4];
        int bytecount1 = 0;
        string output, pl;

        int hsock;
        int *p_int;
        int err;

        hsock = socket(AF_INET, SOCK_STREAM, 0);
        if (hsock == -1)
        {
                printf("Error initializing socket %d\n", errno);
                close(hsock);
        }

        p_int = (int *)malloc(sizeof(int));
        *p_int = 1;

        if ((setsockopt(hsock, SOL_SOCKET, SO_REUSEADDR, (char *)p_int, sizeof(int)) == -1) ||
            (setsockopt(hsock, SOL_SOCKET, SO_KEEPALIVE, (char *)p_int, sizeof(int)) == -1))
        {
                printf("Error setting options %d\n", errno);
                free(p_int);
                close(hsock);
        }
        free(p_int);

        my_addr.sin_family = AF_INET;
        my_addr.sin_port = htons(host_port);

        memset(&(my_addr.sin_zero), 0, 8);
        my_addr.sin_addr.s_addr = inet_addr(host_name);
        if (connect(hsock, (struct sockaddr *)&my_addr, sizeof(my_addr)) == -1)
        {
                if ((err = errno) != EINPROGRESS)
                {
                        fprintf(stderr, "Error connecting socket %d\n", errno);
                        close(hsock);
                }
        }
        char input;
        string funcname;
        int arg1, arg2;

        do
        {
                Call call;
                printf("--------Welcome to RPC using Google Protocol Buffer--------\n");
                printf("Enter the name of the function to be called: add or gettotal: ");
                cin >> funcname;
                call.set_name(funcname);
                string a = 0 + " " + 0;
                if (funcname == "add")
                {
                        printf("Enter argument 1: ");
                        cin >> arg1;
                        printf("Enter argument 2: ");
                        cin >> arg2;

                        a = to_string(arg1) + " " + to_string(arg2);
                        //cout << a << '\n';
                        call.set_args(a);
                }
                else
                {
                        call.set_args(a);
                }
                call.set_name(funcname);

                int siz = call.ByteSize() + 4;
                char *pkt = new char[siz];
                google::protobuf::io::ArrayOutputStream aos(pkt, siz);
                CodedOutputStream *coded_output = new CodedOutputStream(&aos);
                coded_output->WriteVarint32(call.ByteSize());
                call.SerializeToCodedStream(coded_output);

                if ((bytecount = send(hsock, (void *)pkt, siz, 0)) == -1)
                {
                        fprintf(stderr, "Error sending data %d\n", errno);
                        close(hsock);
                        break;
                }
                //printf("Data Sent\n");
                printf("\n");

                memset(obuffer, '\0', 4);

                //Peek into the socket and get the packet size
                if ((bytecount1 = recv(hsock, obuffer, 4, MSG_PEEK)) == -1)
                {
                        fprintf(stderr, "Error receiving data %d\n", errno);
                }
                else if (bytecount1 == 0)
                        break;
                readBody(hsock, readHdr(obuffer));
                delete[] pkt;
                printf("If you want to continue press y/Y: ");
                cin >> input;
        } while (input == 'y' or input == 'Y');
}

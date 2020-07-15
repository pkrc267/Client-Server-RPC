# Client-Server-RPC
Distributed program for client server message passing involving Remote Procedural Call, using Google Protocol Buffer(Protobuf)

>  This work has been submitted by Dhairya Parikh and Prakhar Yadav towards completion of Assignment 3: Remote Procedure Call of Advance Operating Systems course.
>  Make sure to read all the mentioned instructions.

##  Files included

* client.cpp

* server.cpp

* my.proto

## Requirements
* C++ 11
* Google Protocol Buffer library
  

##  Compilation instructions

  

_This work assumes that **g++** compiler and **Google Protocol Buffer** have already been installed. If not, then make sure to install them. Please read about installation of aforementioned requirements based on the machines (OS) being used._

**Step-1**: run protobuf compiler for defined message protocol, to generate the protobuf files to use with client/server programs. This is to be done for both machines i.e. client and server machines.

  

    protoc -I=./ --cpp_out=./ ./my.proto

  

**Step-2**: compile the respective files in respective machines with following commands

  

#####  Linux machine instructions

*for server*

    g++ -std=c++11 -pthread my.pb.cc server.cpp `protoc --cflag --libs protobuf` -o server

  

*for client*

    g++ -std=c++11 -pthread my.pb.cc client.cpp `protoc --cflag --libs protobuf` -o client

  

#####  MacOS machine instructions

*for server*

    g++ -std=c++11 -lprotobuf my.pb.cc server.cpp -o server

  

*for client*

    g++ -std=c++11 -lprotobuf my.pb.cc client.cpp -o client

  

##  Running instructions
 

For this experiment we have made sure to connect the machines on the same network to identify the machines easily over the network. If the machines are placed on different networks, then take note of the unique IPv4 addresses.

Also, the port number that has been used by us for establishing the communication with server has been hard-coded to 5001.
  

Open the terminal in respecctive machines and use the following command for running the respective executables:

*for server*

    ./server

*for client*

    ./client

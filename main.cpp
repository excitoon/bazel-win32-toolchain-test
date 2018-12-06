#include <iostream>

#include <Winsock2.h>

#include <test_library/test_library.h>


int main()
{
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2,2), &wsaData);

    std::cout << "Hello, world!\n";
    test_function();

    return 0;
}

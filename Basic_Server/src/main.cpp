#include <iostream>
#include "IceServer.h"
#include <thread>

int main(void)
{
    std::cout << "Hello Basic Server !" <<  std::endl;

    IceServer server;
    // client.sendRequest("www.baidu.com");
    // server.StartServer();
    while (true)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
    
    return 0;
}
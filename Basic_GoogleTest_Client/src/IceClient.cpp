#include <iostream>
#include "IceClient.h"

IceClient::IceClient() : m_icHolder(Ice::InitializationData{})
{
    std::cout << "IceClient !" << std::endl;
}

IceClient::~IceClient()
{
    std::cout << "~IceClient !" << std::endl;
}

void IceClient::sendRequest(const std::string &url)
{
    std::cout << "sendRequest !" << std::endl; 

    try
    {
        Ice::CommunicatorPtr ic = IceClient::m_icHolder.communicator();
        auto base_ptr = ic->stringToProxy("Web:default -p 10007");

        if(!base_ptr)
        {
            throw "Invalid proxy !";
            std::cout << "Invalid proxy !" << std::endl;
        }

        // auto base_ptr_bak = base_ptr;
        auto Instance = Ice::checkedCast<Custom::WebPrx>(base_ptr);
        if(!Instance)
        {
            throw "Invalid checkedCast !";
            std::cout << "Invalid checkedCast !" << std::endl; 
        }

        Instance->getUrl(url);
    }
    catch(const Ice::Exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

}


void IceClient::echoEx(const int n)
{
    std::cout << "sendRequest !" << std::endl; 

    try
    {
        Ice::CommunicatorPtr ic = IceClient::m_icHolder.communicator();
        auto base_ptr = ic->stringToProxy("Echo:default -p 10007");

        if(!base_ptr)
        {
            throw "Invalid proxy !";
            std::cout << "Invalid proxy !" << std::endl;
        }

        // auto base_ptr_bak = base_ptr;
        auto Instance = Ice::checkedCast<Custom::EchoPrx>(base_ptr);
        if(!Instance)
        {
            throw "Invalid checkedCast !";
            std::cout << "Invalid checkedCast !" << std::endl; 
        }

        Instance->echoMessage(n);
    }
    catch(const Ice::Exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

}
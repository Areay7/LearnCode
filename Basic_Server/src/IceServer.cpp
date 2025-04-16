#include <iostream>
#include "IceServer.h"
#include "CustomImpl.h"

IceServer::IceServer() : m_icHolder(Ice::InitializationData{})
{
    std::cout << "IceServer !" << std::endl;
    StartServer();
}

IceServer::~IceServer()
{
    std::cout << "~IceServer !" << std::endl;
}

void IceServer::StartServer()
{
    try
    {
        Ice::CommunicatorPtr ic = m_icHolder.communicator();
        Ice::ObjectAdapterPtr adapter = ic->createObjectAdapterWithEndpoints("CustomAdapter", "default -p 10007");

        adapter->add(std::make_shared<Custom::EchoImpl>(), Ice::stringToIdentity("Echo"));
        adapter->add(std::make_shared<Custom::WebImpl>(), Ice::stringToIdentity("Web"));
        adapter->add(std::make_shared<Printer::PrintImpl>(), Ice::stringToIdentity("Print")); 
        adapter->activate();

        std::cout << "StartServer !" << std::endl;
    }
    catch (const Ice::Exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

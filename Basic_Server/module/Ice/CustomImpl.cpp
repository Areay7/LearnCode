#include "CustomImpl.h"

namespace Custom
{
    void EchoImpl::echoMessage(int n, const Ice::Current &)
    {
        std::cout << "Recv : " << n << std::endl;
    }


    void WebImpl::getUrl(std::string url, const Ice::Current &)
    {
        std::cout << "Call gerUrl  : " << url << std::endl;
    }
}

namespace Printer
{
    void PrintImpl::printSomething(std::string s, const Ice::Current &)
    {
        std::cout << "printSomething : " << s << std::endl;
    }
}
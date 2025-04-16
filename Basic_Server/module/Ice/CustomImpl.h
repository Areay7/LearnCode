#include <iostream>
#include <Ice/Ice.h>

#include "Custom.h"

namespace Custom
{
    class EchoImpl : public Echo
    {
    public:
        void echoMessage(int n, const Ice::Current &) override;
    };

    class WebImpl : public Web
    {
    public:
        void getUrl(std::string url, const Ice::Current &) override;
    };
}

namespace Printer
{
    class PrintImpl : public Print
    {
    public:
        void printSomething(std::string s, const Ice::Current &) override;
    };
}
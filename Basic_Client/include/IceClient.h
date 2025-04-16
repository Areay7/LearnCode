#include <Ice/Ice.h>
#include "Custom.h"

class IceClient
{
public:
    IceClient();
    ~IceClient();
    void sendRequest(const std::string &url);
    void echoEx(const int n);

private:
    Ice::CommunicatorHolder m_icHolder;
};
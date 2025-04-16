#include <Ice/Ice.h>
#include "Custom.h"

class IceServer
{
public:
    IceServer();
    ~IceServer();

    void StartServer();

private:
    Ice::CommunicatorHolder m_icHolder;
};
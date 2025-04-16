#include <iostream>
#include "IceClient.h"
#include "RabbitMQClient.h"

class Runner
{
public:
    Runner();
    ~Runner();
    void test();

private:
    IceClient m_IceClient;
    // RabbitMQClient m_RabbitMQClient;

    std::shared_ptr<RabbitMQClient> m_RabbitMQClient;

    
};
/*
    假设我们有一个请求处理系统，不同的处理器有不同权限：
    •	经理（Manager）：只能处理金额 ≤ 1000 的报销请求
    •	总监（Director）：能处理 ≤ 5000 的请求
    •	总经理（General Manager）：能处理所有请求

    这个就是典型的责任链：请求从链头开始传递，直到有对象能处理它

    •	Handler：抽象处理者
    •	ConcreteHandler：具体处理者（如 Manager, Director）
    •	Request：请求（可选）
    •	每个处理者有一个指向“下一个处理者”的指针。
*/

#include <iostream>
#include <string>

using namespace std;

class Request
{
public:
    string name;
    double amount;

    Request(const string &n, double a) : name(n), amount(a) {}
};

class Handler
{
protected:
    Handler *next = nullptr;

public:
    virtual ~Handler() = default;

    void setNext(Handler *handler)
    {
        next = handler;
    }

    void handle(const Request &request)
    {
        if (canHandle(request))
        {
            process(request);
        }
        else if (next)
        {
            next->handle(request);
        }
        else
        {
            cout << "无人能处理请求 : " << request.name << " 金额 : " << request.amount << endl;
        }
    }

    virtual bool canHandle(const Request &request) = 0;
    virtual void process(const Request &request) = 0;
};

class Manager : public Handler
{
public:
    bool canHandle(const Request &request) override
    {
        return request.amount <= 1000;
    }

    void process(const Request &request) override
    {
        cout << "经理审批通过  : " << request.name << " 报销金额 : " << request.amount << endl;
    }
};

class Director : public Handler
{
public:
    bool canHandle(const Request &request) override
    {
        return request.amount <= 5000;
    }

    void process(const Request &request) override
    {
        cout << "总监审批通过  : " << request.name << " 报销金额 : " << request.amount << endl;
    }
};

class GenralManager : public Handler
{
    bool canHandle(const Request &request) override
    {
        return request.amount <= 10000;
    }

    void process(const Request &request) override
    {
        cout << "总经理审批通过  : " << request.name << " 报销金额 : " << request.amount << endl;
    }
};

int main()
{
    Manager manager;
    Director director;
    GenralManager gm;

    // 构建责任链：经理 → 总监 → 总经理
    manager.setNext(&director);
    director.setNext(&gm);

    // 测试
    Request r1("小张", 800);
    Request r2("小李", 3000);
    Request r3("小王", 8000);
    Request r4("小刘", 15000);

    manager.handle(r1); // 经理处理
    manager.handle(r2); // 总监处理
    manager.handle(r3); // 总经理处理
    manager.handle(r4); // 无人处理

    return 0;
}
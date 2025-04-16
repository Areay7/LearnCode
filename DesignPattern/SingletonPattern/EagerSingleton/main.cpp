#include <iostream>
using namespace std;

class Singleton
{
    private:
    Singleton() { cout << "构造 Singleton (饿汉式)" << endl;}

    static Singleton instance; // 静态实例

    public:
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    static Singleton& getInstance()
    {
        return instance;
    }

    void doSomething()
    {
        cout << "使用 Singleton 实例" << endl;
    }
};

// 静态成员初始化
Singleton Singleton::instance;

int main()
{
    Singleton& s = Singleton::getInstance();
    s.doSomething();
    return 0;
}
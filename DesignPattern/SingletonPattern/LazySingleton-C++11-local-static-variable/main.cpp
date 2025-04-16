#include <iostream>

using namespace std;

class Singleton
{
    private:
    Singleton() {cout << "构造 Singleton (局部静态变量)" << endl;}
    ~Singleton() {cout << "调用 SIngleton 析构函数" << endl;}

    public:
    static Singleton& getInstance()
    {
        static Singleton instance;
        return instance;
    }

    void doSomething()
    {
        cout << "使用 Singleton 实例" << endl;
    }

};

int main()
{
    Singleton& s = Singleton::getInstance();
    s.doSomething();
    Singleton& s1 = Singleton::getInstance();
    s1.doSomething();
    Singleton& s2 = Singleton::getInstance();
    s2.doSomething();
    return 0;
}
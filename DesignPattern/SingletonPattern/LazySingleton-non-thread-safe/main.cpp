#include <iostream>

using namespace std;

class Singleton
{
private:
    static Singleton *instance;

    Singleton() { cout << "构造 Singleton (懒汉-非线程安全) " << endl; }

public:
    static Singleton *getInstance()
    {
        if (nullptr == instance)
        {
            instance = new Singleton();
        }
        return instance;
    }

    void doSomething()
    {
        cout << "使用 Singleton 实例" << endl;
    }
};

Singleton *Singleton::instance = nullptr;

int main()
{
    Singleton *s = Singleton::getInstance();
    s->doSomething();
    return 0;
}
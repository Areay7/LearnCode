#include <iostream>
#include <mutex>

using namespace std;

class Singleton
{
    private:
    static Singleton* instance;
    static mutex mtx;

    Singleton() { cout << "构造 Singleton (线程安全-加锁)" << endl;}

    public:
    static Singleton* getInstance()
    {
        lock_guard<mutex> lock(mtx);
        if(nullptr == instance)
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

Singleton* Singleton::instance = nullptr;
mutex Singleton::mtx;

int main()
{
    Singleton* s = Singleton::getInstance();
    s->doSomething();
    return 0;
}

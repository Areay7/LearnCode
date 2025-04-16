/*
 假设我们有一个“出行工具”的策略接口，不同的出行方式（开车、骑自行车、坐地铁）是不同的策略。

 	•	策略模式将“变化的行为（出行方式）”封装为独立类，使得行为可以在运行时自由切换。
	•	使用 unique_ptr 自动释放策略对象，防止内存泄漏。
	•	策略类可以灵活扩展，比如加上“打车”、“滑板车”等方式，只需新增类并实现接口即可。
*/

#include <iostream>
#include <memory>

using namespace std;

// 策略接口
class TravelStrategy
{
public:
    virtual void travel() = 0;
    virtual ~TravelStrategy() = default;
};
// 具体策略A：开车
class CarStrategy : public TravelStrategy
{
public:
    // 重写travel()函数
    void travel() override
    {
        // 输出使用开车出行
        cout << "使用 开车 出行!" << endl;
    }
};
// 具体策略B：骑自行车
class BicycleStrategy : public TravelStrategy
{
public:
    void travel() override
    {
        cout << "使用 自行车 出行！" << endl;
    }
};
// 具体策略C：坐地铁
class SubwayStrategt : public TravelStrategy
{
public:
    void travel() override
    {
        cout << "使用 地铁 出行！" << endl;
    }
};
// 上下文类：用于持有并执行策略
class TravelContext
{
private:
    unique_ptr<TravelStrategy> strategy; // 使用智能指针管理策略对象

public:
    void setStrategy(TravelStrategy *s)
    {
        strategy.reset(s); // 替换策略
    }

    void goTravel()
    {
        if (strategy)
            strategy->travel();
        else
            cout << "请先选择出行策略！" << endl;
    }
};

// 主函数测试
int main()
{
    TravelContext context;

    context.goTravel();

    context.setStrategy(new CarStrategy());
    context.goTravel(); // 输出：使用开车出行

    context.setStrategy(new BicycleStrategy());
    context.goTravel(); // 输出：使用自行车出行

    context.setStrategy(new SubwayStrategt());
    context.goTravel(); //  输出：使用地铁出行
}
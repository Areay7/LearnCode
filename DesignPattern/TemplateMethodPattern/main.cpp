/*
    模板方法模式定义了一个算法的骨架，并允许子类重写某些步骤，但不改变算法的整体结构。

    常用于：父类定义流程，子类定制细节。

    模拟一个“冲泡饮料”的过程，抽象类 CaffeineBeverage 提供冲泡流程：
	1.	烧水
	2.	冲泡（泡茶/泡咖啡）← 子类重写
	3.	倒入杯中
	4.	加调料 ← 子类重写

    •	CaffeineBeverage：抽象类，定义模板方法 prepareRecipe
	•	Tea 和 Coffee：子类，重写部分步骤
*/

#include <iostream>
using namespace std;

// 抽象类：饮料
class CaffeineBaverage
{
    public:
    // 模板方法：算法骨架，不可修改
    void prepareRecipe()
    {
        boilWater();
        brew();
        pourInCup();
        addCondiments();
    }

    // 公共实现：烧水
    void boilWater()
    {
        cout << "烧开水..." << endl;
    }

     // 公共实现：倒入杯中
    void pourInCup()
    {
        cout << "倒入杯中..." << endl;
    }

    // 下面两个步骤由子类实现
    virtual void brew() = 0;
    virtual void addCondiments() = 0;

    virtual ~CaffeineBaverage() = default;
};

// 具体类：茶
class Tea : public CaffeineBaverage
{
    public:
    void brew() override
    {
        cout << "用热水浸泡茶叶..." << endl;
    }

    void addCondiments() override
    {
        cout << "加柠檬..." << endl;
    }
};


// 具体类：咖啡
class Coffee : public CaffeineBaverage
{
    public:
    void brew() override
    {
        cout << "用热水冲泡咖啡粉..." << endl;
    }

    void addCondiments() override
    {
        cout << "加糖和牛奶..." << endl;
    }
};

int main()
{
    cout << " --- 冲咖啡 ---" << endl;
    Coffee coffee;
    coffee.prepareRecipe();

    cout << " --- 冲茶 --- " << endl;
    Tea tea;
    tea.prepareRecipe();

    return 0;
}
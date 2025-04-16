/*
    一个工厂类根据传入的参数返回不同的产品对象。

    只有一个工厂类,通过参数判断创建哪个对象
    不符合开闭原则,添加新类型需修改工厂类逻辑
*/

#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "画一个圆形！" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "画一个矩形！" << endl;
    }
};

class SimpleShapeFactory
{
public:
    static unique_ptr<Shape> createShape(const string &type)
    {
        if ("circle" == type)
        {
            return make_unique<Circle>();
        }
        else if ("rectangle" == type)
        {
            return make_unique<Rectangle>();
        }
        else
        {
            return nullptr;
        }
    }
};

int main(void)
{
    auto shape1 = SimpleShapeFactory::createShape("circle");
    if (shape1)
        shape1->draw();

    auto shape2 = SimpleShapeFactory::createShape("rectangle");
    if (shape2)
        shape2->draw();

    auto shape3 = SimpleShapeFactory::createShape("triangle");
    if (!shape3)
        cout << "未知形状!" << endl;
    return 0;
}

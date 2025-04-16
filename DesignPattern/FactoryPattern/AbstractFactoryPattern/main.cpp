/*
    用于创建一组相关或相互依赖的产品（产品族），不指定具体类。

    抽象工厂 → 多个产品族的抽象类
        → 具体工厂 → 创建具体产品族

    示例：
    GUIFactory
    ├── createButton()
    ├── createCheckbox()
    ↓
    WinFactory / MacFactory

       优点                          描述
    创建产品族              多个产品协同工作（比如UI组件）
    易于替换产品族          一键切换风格
    遵循开闭原则            扩展产品族只需新增具体工厂类
*/

#include <iostream>
#include <memory>
using namespace std;

class Button
{
public:
    virtual void paint() = 0;
    virtual ~Button() = default;
};

class Checkbox
{
public:
    virtual void check() = 0;
    virtual ~Checkbox() = default;
};

class WinButton : public Button
{
    void paint() override
    {
        cout << "绘制 Windows 风格按钮" << endl;
    }
};

class WinCheckbox : public Checkbox
{
public:
    void check() override
    {
        cout << "选中 Windows 风格复选框" << endl;
    }
};

class MacButton : public Button
{
public:
    void paint() override
    {
        cout << "绘制 Mac 风格按钮" << endl;
    }
};

class MacCheckbox : public Checkbox
{
public:
    void check() override
    {
        cout << "选中 Mac 风格复选框" << endl;
    }
};

class GuiFactory
{
public:
    virtual unique_ptr<Button> createButton() = 0;
    virtual unique_ptr<Checkbox> createCheckbox() = 0;
    virtual ~GuiFactory() = default;
};

class WinFacetory : public GuiFactory
{
public:
    unique_ptr<Button> createButton() override
    {
        return make_unique<WinButton>();
    }
    unique_ptr<Checkbox> createCheckbox() override
    {
        return make_unique<WinCheckbox>();
    }
};

class MacFacetory : public GuiFactory
{
public:
    unique_ptr<Button> createButton() override
    {
        return make_unique<MacButton>();
    }
    unique_ptr<Checkbox> createCheckbox() override
    {
        return make_unique<MacCheckbox>();
    }
};

void readerUI(GuiFactory &factory)
{
    auto btn = factory.createButton();
    auto cb = factory.createCheckbox();

    btn->paint();
    cb->check();
}

int main(void)
{
    cout << " --- Windows UI ---- " << endl;
    WinFacetory winFacetory;
    readerUI(winFacetory);

    cout << " --- Mac UI --- " << endl;
    MacFacetory macFacetory;
    readerUI(macFacetory);
    return 0;
}

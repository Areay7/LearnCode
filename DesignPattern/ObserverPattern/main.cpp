/*
    观察者模式定义了对象之间一对多的依赖关系，使得当一个对象状态发生改变时，所有依赖它的对象都会自动收到通知并更新

    模拟一个“天气站”的例子：
	•	WeatherData 是被观察者，保存温度数据。
	•	CurrentDisplay 和 StatisticsDisplay 是观察者，实时显示数据。

    •	观察者模式（Observer Pattern）：
	•	是一种 一对多 的依赖关系。
	•	当 被观察者（Subject）状态改变时，所有观察者（Observer）都会自动收到通知并更新。
	•	常用于：事件监听器、GUI响应、订阅/发布系统等。
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 观察接口
class Observer
{
    public:
    virtual void update(float temperature) = 0;
    virtual ~Observer() = default;
};

// 被观察者接口（主题）
class Subject
{
public:
    virtual void attach(Observer* o) = 0;
    virtual void deteach(Observer* o) = 0;
    virtual void notify() = 0;
    virtual ~Subject() = default;
};

// 被观察者实现：天气数据
class WeatherData : public Subject
{
    private:
    vector<Observer*> observers;
    float temperature = 0.0f;

    public:
    void attach(Observer* o) override
    {
        observers.emplace_back(o);
    }

    void deteach(Observer* o) override
    {
        observers.erase(remove(observers.begin(), observers.end(), o), observers.end());
    }

    void notify() override
    {
        for (auto& observer : observers)
        {
            observer->update(temperature);
        }
    }

    void setTemperature(float temp)
    {
        temperature = temp;
        notify(); // 一旦更新就通知所有观察者
    }
};

class CurrentDisplay : public Observer
{
    public:
    void update(float temperature) override
    {
        cout << "[当前显示] 温度更新为 : " << temperature << "°C" << endl;
    }
};

class StatisticsDisplay : public Observer
{
    private:
    vector<float> tempHistory;

    public:
    void update(float temperature) override
    {
        tempHistory.emplace_back(temperature);
        float sum = 0;
        for(float t : tempHistory) sum += t;
        cout << "[统计显示] 平均温度" << (sum / tempHistory.size()) << "°C" << endl;
    }
};

int main(void)
{
    WeatherData weatherData;

    CurrentDisplay currentDisplay;
    StatisticsDisplay statisticsDisplay;

    // 注册观察者
    weatherData.attach(&currentDisplay);
    weatherData.attach(&statisticsDisplay);

    // 模拟天气变化
    weatherData.setTemperature(26.5f);
    // weatherData.setTemperature(27.2f);
    // weatherData.setTemperature(25.8f);
    // weatherData.setTemperature(12.8f);

    return 0;
}




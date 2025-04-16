#pragma once
#include <vector>
#include <map>
#include <list>

std::vector<int> vec = {1, 2, 3};

std::vector<std::string> fruits = {"apple", "banana", "orange"};

std::vector<int> empty_vec;

std::list<double> prices = {9.99, 19.99};

std::vector<std::vector<int>> matrix = {{1, 2}, {3, 4}};

std::set<int> nums = {3, 1, 2};

std::map<std::string, int> age_map = {{"Alice", 25}, {"Bob", 30}};

std::unordered_map<std::string, int> scores = {{"Math", 90}, {"English", 85}};

std::vector<int> data = {10, 20, 30, 40};

std::vector<std::shared_ptr<int>> ptrs = {std::make_shared<int>(42)};

inline std::vector<std::unique_ptr<int>> uptrs = []() {
    std::vector<std::unique_ptr<int>> v;
    v.emplace_back(std::make_unique<int>(42));
    return v;
}();

class Person
{
    public:
    Person(std::string s, int n) : name(s), age(n){}
    std::string name;
    int age;

    int GetAge() const
    {
        return 77;
    }

    private:
    int age_;
};

std::vector<Person> people = {{"Alice", 25}, {"Bob", 30}};

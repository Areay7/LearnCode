#include <iostream>
#include <type_traits>
#include <typeinfo>
#include <string>

template<typename T>
void print_type_info(const std::string& name) {
    std::cout << name << ":\n";
    std::cout << "  type T          = " << typeid(T).name() << "\n";
    std::cout << "  is const        = " << std::boolalpha << std::is_const<std::remove_reference_t<T>>::value << "\n";
    std::cout << "  is reference    = " << std::is_reference<T>::value << "\n";
    std::cout << "  is lvalue ref   = " << std::is_lvalue_reference<T>::value << "\n";
    std::cout << "  is rvalue ref   = " << std::is_rvalue_reference<T>::value << "\n";
    std::cout << "\n";
}

template<typename T>
void f(T&& param) {
    print_type_info<T>("T");
    print_type_info<decltype(param)>("decltype(param)");
    print_type_info<decltype((param))>("decltype((param))");
}

int main() {
    int x = 27;
    const int cx = x;
    const int& rx = x;

    std::cout << "---- f(x); // x 是左值 ----\n";
    f(x);

    std::cout << "---- f(cx); // cx 是左值 ----\n";
    f(cx);

    std::cout << "---- f(rx); // rx 是左值 ----\n";
    f(rx);

    std::cout << "---- f(27); // 27 是右值 ----\n";
    f(27);

    return 0;
}
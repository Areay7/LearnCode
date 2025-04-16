#include <iostream>
#include <type_traits>
#include <typeinfo>
#include <memory>
#include <cxxabi.h>

// 工具函数：将 typeid 返回的名称 demangle 成易读的 C++ 名字
std::string demangle(const char* name) {
    int status = 0;
    std::unique_ptr<char[], decltype(&std::free)> res(
        abi::__cxa_demangle(name, nullptr, nullptr, &status), std::free
    );
    return (status == 0) ? res.get() : name;
}

// 工具模板：打印类型信息
template<typename T>
void print_type_info(const std::string& note = "") {
    std::cout << (note.empty() ? "" : (note + ": ")) << "\n";
    std::cout << "  type T          = " << demangle(typeid(T).name()) << '\n';
    std::cout << "  is const        = " << std::boolalpha << std::is_const<T>::value << '\n';
    std::cout << "  is reference    = " << std::is_reference<T>::value << '\n';
    std::cout << "  is pointer      = " << std::is_pointer<T>::value << '\n';
    std::cout << "  is lvalue ref   = " << std::is_lvalue_reference<T>::value << '\n';
    std::cout << "  is rvalue ref   = " << std::is_rvalue_reference<T>::value << '\n';
    std::cout << std::endl;
}

// 三种模板函数，分别接收 T& / const T& / T*
template <typename T>
void f_ref(T& param) {
    print_type_info<T>("T in f_ref");
    print_type_info<decltype(param)>("param in f_ref");
}

template <typename T>
void f_const_ref(const T& param) {
    print_type_info<T>("T in f_const_ref");
    print_type_info<decltype(param)>("param in f_const_ref");
}

template <typename T>
void f_ptr(T* param) {
    print_type_info<T>("T in f_ptr");
    print_type_info<decltype(param)>("param in f_ptr");
}

int main() {
    std::cout << "---- case 1 : T& ----" << std::endl;
    int x = 42;
    const int cx = x;
    const int& rx = x;

    f_ref(x);
    f_ref(cx);
    f_ref(rx);

    std::cout << "---- case 2 : const T& ----" << std::endl;
    f_const_ref(x);
    f_const_ref(cx);
    f_const_ref(rx);

    std::cout << "---- case 3 : T* ----" << std::endl;
    f_ptr(&x);
    const int* px = &x;
    f_ptr(px);
    f_ptr(&cx);

   

    return 0;
}
#include <iostream>
#include <concepts>

template<typename T>
requires (std::is_arithmetic<T>::value)
struct A {
//public:
    auto operator()(T a, T b, T c) {
        return a + b + c;
    }
};

template<typename T>
struct B : A<T> {
//public:
    auto operator()(T c, T d) {
        return c + d;
    }

//    using A<T>::operator();
};

int main() {
    A<int> a;
    std::cout << a(1, 2, 3) << std::endl;

    B<int> b;

    std::cout << b(4, 6) << std::endl;

    return 0;
}
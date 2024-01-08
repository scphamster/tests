#include <iostream>

class X {
public:
    int a;

    [[nodiscard]] int f() const { return a; }
};

template<typename Class, typename Proj>
void use_projection(const Class &valA, const Class &valB, Proj projection) {
    auto valA_projected = valA.*projection;
    auto valB_projected = valB.*projection;

    std::cout << "a: " << valA_projected << " b: " << valB_projected << "\n";
}

int main() {
    X x{.a = 1};
    X y{.a = 2};

    use_projection(x, y, &X::a);
}
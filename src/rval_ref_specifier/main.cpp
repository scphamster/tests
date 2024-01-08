#include <iostream>

class LargeObject {
public:
    explicit LargeObject(int val = 0) : i(val) { std::cout << "Creating LargeObject " << i << std::endl; }

    LargeObject(const LargeObject &other) { std::cout << "Copying LargeObject " << other.i << std::endl; }

    LargeObject(LargeObject &&other) noexcept { std::cout << "Moving LargeObject." << other.i << std::endl; }

    int operator+(int other_val) const { return i + other_val; }

    int operator+(const LargeObject &other) const { return i + other.i; }

    int operator+(LargeObject &&other) const {
        std::cout << "rval operator+" << std::endl;
        return i + other.i;
    }

private:
    int i{};
};

class A {
public:
    explicit A(int i) : lObj(i) {}

    LargeObject &get() &{ return lObj; }

    [[nodiscard]] const LargeObject &get() const &{ return lObj; }

    LargeObject &&get() &&{ return std::move(lObj); }

    [[nodiscard]] const LargeObject &&get() const &&{ return std::move(lObj); }

private:
    LargeObject lObj;
};

int main() {
    auto val3 = LargeObject(1) + A(2).get();

    return 0;
}
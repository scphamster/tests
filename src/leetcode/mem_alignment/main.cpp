#include <iostream>
#include <array>
#include <cstdint>

class Test {
public:
    explicit Test(int i) : i(i) {}

private:
    int i;
};

int main() {
    std::cout << alignof(int) << std::endl;
    std::cout << alignof(uint8_t) << std::endl;
    std::cout << alignof(double) << std::endl;
    std::cout << alignof(std::array<uint8_t, 10>) << std::endl;

    return 0;
}
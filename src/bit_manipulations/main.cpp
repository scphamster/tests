#include <algorithm>
#include <bitset>
#include <iostream>

void checkForPowerOfTwo() {
    auto checker = [](auto num) {
        return (num & (num - 1)) == 0;
    };

    for (auto i = 0 ; i < 100 ; ++i) {
        if (checker(i)) {
            std::cout << i << " is power of two" << std::endl;
        }
    }
}

class Test {
public:
    void Member() volatile {

    }
};

int main()
{
    checkForPowerOfTwo();
    return 0;

}
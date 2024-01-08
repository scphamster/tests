#include <iostream>
#include <algorithm>
#include <vector>

void check_lambda_return() {
    auto vals = std::vector{1, 2, 3, 4, 5};

    std::for_each(vals.begin(), vals.end(), [](auto val) {
        if (val == 3) {
            return;
        }
        std::cout << val << std::endl;
    });

    std::cout << "Done" << std::endl;
}

int main() {
    check_lambda_return();
    return 0;
}
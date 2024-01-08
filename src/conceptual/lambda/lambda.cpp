#include <iostream>
#include <vector>

int
main()
{
    auto v = std::vector{1,2,3,4,5};

    auto byCopy_error = [v]() {
        // v.push_back(10); //error - objects captured by copy are const by default
    };

    auto byCopy_mutable = [v]() mutable {
        v.push_back(10);
    };

    auto byRef = [&v]() {
        v.push_back(12);
    };

    return 0;
}
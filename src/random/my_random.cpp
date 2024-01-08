#include <random>
#include "my_random.hpp"

int RandomIt::operator()(int max) const {
    std::mt19937 mt{std::random_device{}()};
    return static_cast<int>(mt() % max);
}

int RandomIt::operator()(int min, int max) const {
    auto mt = std::mt19937{std::random_device{}()};
    return static_cast<int>(mt() % (max - min) + min);
}
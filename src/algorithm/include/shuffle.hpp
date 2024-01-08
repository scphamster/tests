#pragma once
#include <algorithm>
#include <vector>
#include <ranges>
#include <concepts>
#include <random>

class ShuffleNoTemplate {
public:
    std::vector<int>& operator()(std::vector<int>& c) {
        std::shuffle(c.begin(), c.end(), std::mt19937{std::random_device{}()});
        return c;
    }
};

class ShuffleTemplate {
public:
    template<std::ranges::random_access_range C>
    C& operator()(C& c) {
        std::shuffle(c.begin(), c.end(), std::mt19937{std::random_device{}()});
        return c;
    }
};
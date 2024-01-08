#pragma once
#include <algorithm>
#include <ranges>


template<typename Container>
Container& sort(Container& c) {
    std::ranges::sort(c);
    return c;
}

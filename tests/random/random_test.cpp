#include <gtest/gtest.h>
#include "my_random.hpp"

TEST(Random, StaysWithinLimits) {
    auto rd = RandomIt();
    auto min = -100;
    auto max = 100;

    auto iterations_num = 100000;
    while(--iterations_num) {
        auto res = rd(max);

        ASSERT_LT(res, max);
    }

    iterations_num = 100000;
    while(--iterations_num) {
        auto result = rd(min, max);
        ASSERT_LT(result, max);
        ASSERT_GE(result, min);
    }
}
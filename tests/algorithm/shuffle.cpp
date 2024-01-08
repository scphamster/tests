#include "shuffle.hpp"
#include <vector>
#include <gtest/gtest.h>

TEST(ShuffleNoTemplate, TestNotSame) {
    std::vector<int> v{1, 2, 3, 4, 5};
    std::vector<int> v2{1, 2, 3, 4, 5};
    ShuffleNoTemplate shuffle;
    shuffle(v);

    EXPECT_NE(v, v2);
}
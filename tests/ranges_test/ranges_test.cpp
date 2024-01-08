#include <gtest/gtest.h>
#include "my_ranges.hpp"
#include <vector>

TEST(RangesTest, Sort) {
    std::vector<int> v{3, 1, 4, 1, 5, 9};
    std::vector<int> expected{1, 1, 3, 4, 5, 9};
    EXPECT_EQ(expected, sort(v));
}

TEST(RangesTest, SortByProjection) {
    std::vector<int> v;
    std::vector<int> expected;

    struct S {
        int i;
        int j;
    };

    std::vector sVec{{S{1, 2}, S{3, 4}, S{5, 6}}};
    std::vector sExpected{{S{5, 6}, S{3, 4}, S{1, 2}}};

    std::ranges::sort(sVec, std::greater<int>{}, &S::i);
    auto equalityResult = std::ranges::equal(sVec, sExpected, [](auto const &lh, auto const &rh) {
        return lh.i == rh.i && lh.j == rh.j;
    });

    EXPECT_EQ(true, equalityResult);
}

TEST(RangesTest, RangesCopyFromArray) {
    int arr[] = {1, 2, 3, 4, 5};
    auto testV = std::vector<int>{};

    std::ranges::copy(arr, std::back_inserter(testV));

    auto equalityResult = std::ranges::equal(arr, testV);

    EXPECT_EQ(true, equalityResult);
}


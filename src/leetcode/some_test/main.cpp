#include <iostream>
#include <vector>
#include <map>

// You've got an array of integers called nums and an integer target.
// Please return two indices of two numbers such that they add up to target. You may assume that each input would have exactly one solution.
// And you may not use the same element twice.
// Ex 1: Input: nums = [2,12,14,2], target = 14 Output: [0,1] Ex 2: Input: nums = [3,2,3], target = 6 Output: [0,2] Ex 3: Input: nums = [3,3], target = 6 Output: [0,1]
using ItT = std::vector<int>::const_iterator;
using IdxT = std::vector<int>::difference_type;

// first implementation
[[nodiscard]] std::pair<ItT, ItT>
getIterators(const std::vector<int>& v, const int target) noexcept {
    auto mp = std::map<int, ItT>{};

    for (auto it = v.cbegin(); it < v.cend(); it++) {
        auto wanted = target - *it;

        if (mp.find(wanted) != mp.end()) {
            return {mp[wanted], it};
        }

        mp[*it] = it;
    }

    return {v.cend(), v.cend()};
}

[[nodiscard]] std::pair<IdxT, IdxT>
getIndexes(const std::vector<int>& v, const int target) noexcept {
    auto mp = std::map<int, ItT>{};

    for (auto it = v.cbegin(); it < v.cend(); it++) {
        auto wanted = target - *it;

        if (mp.find(wanted) != mp.end()) {
            return {mp[wanted] - v.cbegin(), it - v.cbegin()};
        }

        mp[*it] = it;
    }

    return {0, 0};
}

int main() {
    // I missed this part, here the "std::initializer_list" is constructed, not the actual std::vector, that was a typo.
    // The vector in the invoked function is created with this list, and upon the return, the vector is destroyed, so the returned iterators
    // are garbage after function return.
    // If we change the "v" variable to be of std::vector type, we elongate the lifetime of this object up to the end of the main function
    // and the iterators are valid up until the end of the "main".
    auto badVector = {2, 12, 14, 2};

    auto v = std::vector{2, 12, 14, 2};
    auto target = 14;

    auto res = getIndexes(v, target);
    auto notSoBadRes = getIterators(v, target);
    auto badRes = getIterators(badVector, target);

    std::cout << "Ok         " << "F: " << res.first << " S: " << res.second << std::endl;
    std::cout << "Not so bad " << "F: " << notSoBadRes.first - v.cbegin() << " S: " << notSoBadRes.second - v.cbegin() << std::endl;
    std::cout << "Bad        " << "F: " << *(badRes.first) << " S: " << *(badRes.second) << std::endl;

    return 0;
}


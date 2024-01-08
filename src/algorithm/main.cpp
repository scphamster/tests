#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <ranges>

void upper_bound() {
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 8, 8};

    auto it = std::find(v.begin(), v.end(), 8);
    auto ub = std::upper_bound(it, v.end(), 8);

    std::cout << "distance = " << ub - it << std::endl;
}

int main() {
    upper_bound();
}


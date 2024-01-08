#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

void copy_raw_array() {
    int arr[] = {1, 2, 3, 4, 5};

    std::vector<int> v;

    std::copy(std::begin(arr), std::end(arr), std::back_inserter(v));

    for (auto const val : v) {
        std::cout << val << " ";
    }

    std::cout << "\n";
}

void insert_to_map() {
    auto v = std::vector<int>{1, 2, 3, 4, 5};
    std::map<int, int> m;

    std::for_each(std::begin(v), std::end(v), [&m](auto const val) {
        m.insert(std::make_pair(val, 0));
    });
}

int main(int argc, char **argv) {
    copy_raw_array();
}
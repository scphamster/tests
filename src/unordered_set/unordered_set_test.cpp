#include <iostream>
#include <unordered_set>




int main() {
    std::unordered_set<int> test_set;
    for (int i = 0; i < 10; i++) {
        test_set.insert(i);
    }

    for (auto const val : test_set) {
        std::cout << val << "\n";
    }

    test_set.rehash(0);

    for (auto const val : test_set) {
        std::cout << val << "\n";
    }

    test_set.rehash(0);

    for (auto const val : test_set) {
        std::cout << val << "\n";
    }

}
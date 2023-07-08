#include <iostream>
#include <vector>
#include <algorithm>

void resizing_test() {
    std::vector<int> test_v2;
    for (int i = 0; i < 10'000; i++) {
        test_v2.push_back(i);
        std::cout << test_v2.capacity() - test_v2.size() << "\n";
    }
}

int main() {
    resizing_test();

}

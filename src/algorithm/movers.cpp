#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

void set_to_vector() {
    std::set<int> s{1, 2, 3, 4, 5};
    std::vector<int> v(s.begin(), s.end());

    for (auto val : v ) {
        std::cout << val << std::endl;
    }

}

int main() {
    set_to_vector();
    return 0;
}

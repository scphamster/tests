#include <map>
#include <iostream>
#include <unordered_map>
#include <set>

void map() {
    std::map<int, int> mp;

    mp[0] = 5;
    mp[1] = 10;
    mp[2] = 15;

    mp.erase(std::next(mp.begin(), 1), mp.end());

    for (auto [key, val]: mp) {
        std::cout << key << ':' << val << std::endl;
    }

}

void multimap() {
    std::multimap<int, char> mlp;

    mlp.insert({1, 'a'});
    mlp.insert({1, 'b'});
    mlp.insert({2, 'c'});

    auto it = mlp.cbegin();
    std::cout << it->first << ':' << it->second << std::endl;
    ++it;
    std::cout << it->first << ':' << it->second;
}

void multimap_order() {
    std::multimap<int, char> mlp;

    mlp.insert({1, 'a'});
    mlp.insert({1, 'e'});
    mlp.insert({1, 'b'});
    mlp.insert({1, 'd'});
    mlp.insert({1, 'c'});
    mlp.insert({2, 'c'});
    mlp.insert({3, 'c'});
    mlp.erase(3);

    mlp.erase(mlp.find(1));

    for (auto [key, val]: mlp) {
        std::cout << key << ':' << val << std::endl;
    }
}



int main() {
    multimap_order();

    return 0;
}
#include <iostream>
#include <string>
#include <unordered_map>
#include <set>
#include <map>
#include <algorithm>
#include <cstdint>


std::string minWindow(std::string s, std::string t) {
    using strIt = std::string::const_iterator;

    std::unordered_map<char, int> mp;
    std::multimap<char, strIt> chs;
    std::set<strIt> iterators;

    int total = 0;

    for (auto ch: t) {
        mp[ch]++; //check preincrement
        ++total;
    }

    auto first_hit = std::find_first_of(s.cbegin(), s.cend(), t.cbegin(), t.cend());
    if (first_hit == s.cend()) return "";

    std::pair<strIt, strIt> best_string{s.cbegin(), s.cend()};
    std::string::difference_type shortest_string = INT32_MAX;

    auto it = first_hit;
    while(it < s.cend()) {
        if (mp[*it] == 0) {
            ++it;
            continue;
        }
        else if (chs.count(*it) < mp[*it]) {
            chs.insert({*it, it});
            iterators.insert(it);
        }
        else {
            //find the one that is situated first
            auto first = chs.find(*it);

            chs.erase(first);
            iterators.erase(first->second);

            chs.insert({*it, it});
            iterators.insert(it);
        }

        if (iterators.size() == total) {
            auto str_size = *(iterators.crbegin()) - *(iterators.cbegin());

            if (str_size < shortest_string) {
                best_string.first = *(iterators.cbegin());
                best_string.second =  *(iterators.crbegin());

                shortest_string = best_string.second - best_string.first;
            }
        }

        ++it;
    }

    if (iterators.size() < total) return "";
    else return std::string(best_string.first, best_string.second + 1);

}

int main() {
    std::string s = "ADOBECODEBANC";
    std::string t = "ABC";
    std::cout << minWindow(s, t) << std::endl;

    std::string ss = "a";
    std::string tt = "a";
    std::cout << minWindow(ss, tt) << std::endl;

    std::string sss = "a";
    std::string ttt = "aa";
    std::cout << minWindow(sss, ttt) << std::endl;

    return 0;
}
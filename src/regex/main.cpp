#include <iostream>
#include <string>
#include <regex>

std::string reverseWords(std::string s) {
    auto pattern = std::regex("(\\w+)");
    std::smatch matched_word;

    std::string output;
    output.reserve(s.size());

    auto begin = s.cbegin();
    auto endd = s.cend();

    while (std::regex_search(begin, endd, matched_word, pattern)) {
        begin += matched_word.str().size();
        output += matched_word.str() + ' ';
    }

    if (output.size() > 0) {
        output.pop_back();
    }

    return output;
}

int main(int argc, char **argv) {
    std::string dupa = " dupa " + std::string(3, ' ') + "next dupa";
    std::cout << dupa << "\n";
}
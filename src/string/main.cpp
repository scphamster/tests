#include <iostream>
#include <string>
#include <vector>
#include <format>

void
format_string()
{
    static constexpr auto fmt = std::string{ "Hello from {}" };
    std::cout << std::format( fmt, "hell!" );
}

void
string_shows_beyond_the_null_char()
{
    auto vec = std::vector<char>{ 'a', 'b', 'c', '\0', 2, 1, 3 };

    // construct string from vector data
    auto str         = std::string{ vec.data(), vec.size() };
    auto str_no_null = std::string{ vec.data() };

    std::cout << "string - not terminated: " << str << '\n';
    std::cout << "string - terminated: " << str_no_null << '\n';
}

void
string_view_shows_beyond_the_null_char()
{
    auto vec           = std::vector<char>{ 'a', 'b', 'c', '\0', 2, 1, 3 };
    auto strVw         = std::string_view{ vec.data(), vec.size() };
    auto strVw_no_null = std::string_view{ vec.data() };

    std::cout << "string view - not terminated: " << strVw << '\n';
    std::cout << "string view - terminated: " << strVw_no_null << '\n';
}

int
main()
{
    format_string();
    return 0;
}
#include <iostream>
#include <vector>

namespace size
{
class TestConstexpr {
  public:
    constexpr auto static DUPA = 5;
};

class TestConst {
  public:
    const auto static DUPA = 10;
};
}

namespace constructor
{
class Constexpr {
  public:
    constexpr explicit Constexpr(auto dupa)
      : val{ dupa }
    { }

    const int val = 5;
};
}

namespace const_eval
{
constexpr void constFunction() {


}
}

int
main()
{
    std::cout << "Size of classes TestConstexpr and TestConst :: " << sizeof(size::TestConstexpr) << " : "
              << sizeof(size::TestConst) << "\n";

    constexpr constructor::Constexpr c{ 5 };
//    constexpr
    std::cout << "cpp version: " << __cplusplus << '\n';

    return 0;
}
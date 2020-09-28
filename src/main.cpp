#include <iostream>
#include <string>

#include "utils_math.hpp"

int main()
{
    const auto a = float{3.14};
    const auto b = float{99.2};
    const auto sum = utils::math::add(a, b);
    std::cout << a << " + " << b << " = " << sum << std::endl;

    auto c = utils::math::comparator{};
    std::cout << std::boolalpha << c.compare(a, b) << std::endl;
    std::cout << std::boolalpha << c.compare("hello", "hello") << std::endl;

    return 0;
}

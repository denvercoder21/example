#include <iostream>

#include "utils_math.hpp"

int main()
{
    const auto a = float{3.14};
    const auto b = float{99.2};
    const auto sum = utils::math::add(a, b);
    std::cout << a << " + " << b << " = " << sum << std::endl;

    const auto c = utils::math::comparator{};
    const auto d = std::string{"hello"};
    std::cout << a << (c.compare(a, b) ? " == " : " != ") << b << std::endl;
    std::cout << d << (c.compare(d, d) ? " == " : " != ") << d << std::endl;

    return 0;
}

#pragma once

#include <string>
#include <type_traits>

namespace utils::math
{

template<typename Arithmetic>
auto add(Arithmetic a, Arithmetic b) -> std::enable_if_t<std::is_arithmetic_v<Arithmetic>, Arithmetic>
{
    return a + b;
}

class comparator
{
public:
    [[nodiscard]] auto compare(int a, int b) const noexcept -> bool;
    [[nodiscard]] auto compare(const std::string& a, const std::string& b) const noexcept -> bool;
};

} // utils::math

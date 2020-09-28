#include "utils_math.hpp"

namespace
{

template<typename T>
auto comp(const T& a, const T& b)
{
    return a == b;
}

} // namespace

namespace utils::math
{

auto comparator::compare(int a, int b) const noexcept -> bool
{
    return comp(a, b);
}

auto comparator::compare(const std::string& a, const std::string& b) const noexcept -> bool
{
    return comp(a, b);
}

} // utils::math
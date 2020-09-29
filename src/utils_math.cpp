#include "utils_math.hpp"

namespace
{

template<typename Comparable>
auto _compare(const Comparable& a, const Comparable& b)
{
    return a == b;
}

} // namespace

namespace utils::math
{

auto comparator::compare(int a, int b) const noexcept -> bool
{
    return _compare(a, b);
}

auto comparator::compare(const std::string& a, const std::string& b) const noexcept -> bool
{
    return _compare(a, b);
}

} // utils::math
#include "gtest/gtest.h"

#include "utils_math.hpp"

#include <string>

TEST(example, add)
{
    const auto a = float{3.14};
    EXPECT_FLOAT_EQ(utils::math::add(a, a), 6.28f);

    const auto b = int{3};
    EXPECT_EQ(utils::math::add(b, b), 6);
}

TEST(example, comparator)
{
    const auto comp = utils::math::comparator{};

    EXPECT_TRUE(comp.compare(3, 3));
    EXPECT_FALSE(comp.compare(3, -3));

    EXPECT_TRUE(comp.compare(std::string{"hello"}, std::string{"hello"}));
    EXPECT_FALSE(comp.compare(std::string{"hello"}, std::string{"world"}));
}
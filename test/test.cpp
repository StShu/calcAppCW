#include "../calcApp/functions.h"
#define CATCH_CONFIG_MAIN
#include "../catch/catch.hpp"

TEST_CASE("Test Amount")
{
    float expected = 6;
    REQUIRE(expected == sum(2, 4));
}
TEST_CASE("Test Difference")
{
    float expected = 7.5;
    REQUIRE(expected == diff(10, 2.5));
}

TEST_CASE("Test Multiplication")
{
    float expected = 8;
    REQUIRE(expected == multiP(2, 4));
}

TEST_CASE("Test Division")
{
    float expected = 5;
    REQUIRE(expected == divs(10, 2));
}
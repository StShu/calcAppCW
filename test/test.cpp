#include "../calcApp/functions.h"
#define CATCH_CONFIG_MAIN
#include "../catch/catch.hpp"

TEST_CASE("test1")
{
    float expected_bull = 6;
    REQUIRE(expected_bull == sum(2, 4));
}
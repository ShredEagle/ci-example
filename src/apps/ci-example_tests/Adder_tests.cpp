#include "catch.hpp"

#include <ci-example/Adder.h>


using namespace ad;


SCENARIO("Addition testing.")
{
    GIVEN("Two integers.")
    {
        int a = 1; int b = 2;
        THEN("They can be added together.")
        {
            REQUIRE(add(a, b) == a + b);
        }
    }
}

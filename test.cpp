#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "math_utils.h"

TEST_CASE ( "Testing whether an integer is perfect squares", "[IsSquare]") {
  REQUIRE( Math_utils::IsSquare(100) == true );
  REQUIRE( Math_utils::IsSquare(20) == false );
  REQUIRE( Math_utils::IsSquare(25) == true );
}
TEST_CASE ( "Get dight at nth place", "[GetDigit]") {
  REQUIRE( Math_utils::GetDigit(17, 1) ==7);
  REQUIRE( Math_utils::GetDigit(17, 10) == 1);
  REQUIRE( Math_utils::GetDigit(12347, 1000)==2);
  CHECK_THROWS( Math_utils::GetDigit(17,100));
}

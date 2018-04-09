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
TEST_CASE ( "Test whether two integers have equal parity", "[EqualParity]") {
  REQUIRE( Math_utils::EqualParity(3, 1) ==true);
  REQUIRE( Math_utils::EqualParity(12, 2) == true);
  REQUIRE( Math_utils::EqualParity(1, 2)==false);
  
}
TEST_CASE ( "Test whether all numbers in the vector have equal parity", "[EqualParity]") {
  std::vector<int> nums1 {0,2,4,6,8,10};
  std::vector<int> nums2 {1,3,5,7,9,11};
  std::vector<int> nums3 {0,2,4,5,8,10};
  
  
  REQUIRE( Math_utils::EqualParity(nums1) ==true);
  REQUIRE( Math_utils::EqualParity(nums2) == true);
  REQUIRE( Math_utils::EqualParity(nums3)==false);
  
}

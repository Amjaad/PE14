#include <iostream>
#include <vector>
using namespace std;
class  Math_utils {
public:
  // returns true iff num is a square (1, 4, 16, 25, etc)
  static bool IsSquare(int num);

  // — returns the digit at place in the number. Place should be base ten:
  static int GetDigit(int num, int place);

  //— returns true iff x and y have equal parity (both odd or both even)
  static bool EqualParity(int x, int y);
  // — returns true iff all numbers in nums have equal parity (both odd or both even)
  static bool EqualParity(std::vector<int> nums);

};

// returns true iff num is a square (1, 4, 16, 25, etc)
bool IsSquare(int num);

// — returns the digit at place in the number. Place should be base ten:
int GetDigit(int num, int place);

GetDigit(17, 1);

//— returns true iff x and y have equal parity (both odd or both even)
bool EqualParity(int x, int y);
// — returns true iff all numbers in nums have equal parity (both odd or both even)
bool EqualParity(std::vector<int> nums);

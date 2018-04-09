# include "math_utils.h"
using namespace std;
bool Math_utils::IsSquare(int num){
    for (int i = 0; i < num / 2 + 2; i++)
    {
        if (i * i == num)
        {
            return true;
        }
    }
    return false;
}

// — returns the digit at place in the number. Place should be base ten:
int Math_utils::GetDigit(int num, int place){
  if(num > place){
      return (num/place)%10;
  }
  throw std::invalid_argument("");
}

//— returns true iff x and y have equal parity (both odd or both even)
bool Math_utils::EqualParity(int x, int y){
  int x1 = x % 2;
  int y1 = y % 2;
  
  if (x1 == y1){
      return true;
  }

  else{
      return false;
  }


}
// — returns true iff all numbers in nums have equal parity (both odd or both even)
bool Math_utils::EqualParity(std::vector<int> nums){
  int check = nums[0] % 2;
  for (int i=1; i < nums.size(); i++){
         if ((nums[i] % 2) != check ){
             return false;
         }
  }

  return true;
}

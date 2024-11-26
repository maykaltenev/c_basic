// const int BIRTHYEAR = 1980;

// Operators

// Operator	Name	Description	Example	
// +	Addition	Adds together two values	x + y	
// -	Subtraction	Subtracts one value from another	x - y	
// *	Multiplication	Multiplies two values	x * y	
// /	Division	Divides one value by another	x / y	
// %	Modulus	Returns the division remainder	x % y	
// ++	Increment	Increases the value of a variable by 1	++x	
// --	Decrement	Decreases the value of a variable by 1	--x

// Operator	Example	 Same As	
// =	x = 5	     x = 5	
// +=	x += 3	     x = x + 3	
// -=	x -= 3	     x = x - 3	
// *=	x *= 3	     x = x * 3	
// /=	x /= 3	     x = x / 3	
// %=	x %= 3	     x = x % 3	
// &=	x &= 3	     x = x & 3	
// |=	x |= 3	     x = x | 3	
// ^=	x ^= 3	     x = x ^ 3	
// >>=	x >>= 3	     x = x >> 3	
// <<=	x <<= 3 	 x = x << 3	
#include <stdio.h>

int main() {
  int myAge = 25;
  int votingAge = 18;

  if (myAge >= votingAge) {
    printf("Old enough to vote!");
  } else {
    printf("Not old enough to vote.");
  }
  
  return 0;
}
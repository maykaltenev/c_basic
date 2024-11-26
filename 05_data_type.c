// //! Data Types
#include <stdio.h>
// Data Type	Size	Description	Example
// int	2 or 4 bytes	Stores whole numbers, without decimals	1
// float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits	1.99
// double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits	1.99
// char	1 byte	Stores a single character/letter/number, or ASCII values	'A'


// Format Specifier	Data Type	
// %f or %F	float	
// %lf	double	
// %c	char	
// %s	Used for strings (text), which you will learn more about in a later chapter


// float vs. double

// The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore, it is often safer to use double for most calculations - but note that it takes up twice as much memory as float (8 bytes vs. 4 bytes).


// #include <stdio.h>

// int main() {
//   float myFloatNum = 3.5;

//   printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
//   printf("%.1f\n", myFloatNum); // Only show 1 digit
//   printf("%.2f\n", myFloatNum); // Only show 2 digits
//   printf("%.4f", myFloatNum);   // Only show 4 digits
//   return 0;
// }

// Memory Size
// int main() {
//   int myInt;
//   float myFloat;
//   double myDouble;
//   char myChar;
 
//   printf("%lu\n", sizeof(myInt));
//   printf("%lu\n", sizeof(myFloat));
//   printf("%lu\n", sizeof(myDouble));
//   printf("%lu\n", sizeof(myChar));
  
//   return 0;
// }



// int main() {
//   // Create variables of different data types
//   int items = 50;
//   float cost_per_item = 9.99;
//   float total_cost = items * cost_per_item;
//   char currency = '$';

//   // Print variables
//   printf("Number of items: %d\n", items);
//   printf("Cost per item: %.2f %c\n", cost_per_item, currency);
//   printf("Total cost = %.2f %c\n", total_cost, currency);

//   return 0;
// }

//Type Conversion

int main() {
  // Set the maximum possible score to 500
  int maxScore = 500;

  // The actual score of the user
  int userScore = 423;

  // Calculate the percantage of the user's score in relation to the maximum available score
  float percentage = (float) userScore / maxScore * 100.0;

  // Print the percentage
  printf("User's percentage is %.2f", percentage);

  return 0;
}
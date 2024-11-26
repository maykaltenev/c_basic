// Declaring Variables
// type variableName = value;
#include <stdio.h>


/*In C, there are different types of variables (defined with different keywords), for example:

int - stores integers (whole numbers), without decimals, such as 123 or -123
float - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Characters are surrounded by single quotes*/

// Format Specifiers
/*Format Specifiers
Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.

A format specifier starts with a percentage sign %, followed by a character.

For example, to output the value of an int variable, use the format specifier %d surrounded by double quotes (""), inside the printf() function:*/

// int main(){
//   int myNum = 15;
//   char myLetter = 'D';
//   printf("My number is %d and my letter is %c", myNum, myLetter);
//   printf("My favorite number is: %d", myNum);
//   printf("My favorite number is: %d", 15);
//   printf("My favorite letter is: %c", 'D');
//   return 0;
// }

//! //Change Variable Values
// #include <stdio.h>

// int main() {
//   int myNum = 15;
  
//   int myOtherNum = 23;

//   // Assign the value of myOtherNum (23) to myNum
//   myNum = myOtherNum;

//   // myNum is now 23, instead of 15
//   printf("%d", myNum);
  
//   return 0;
// }
//! Multiple Variables
// int main() {
// //   int x = 5, y = 6, z = 50;
// //   printf("%d\n", x + y + z);
//   int x, y, z;
//   x = y = z = 50;
//   printf("%d\n", x + y + z);
//   return 0;
// }
//!C Variable Names (Identifiers)
/*All C variables must be identified with unique names.

These unique names are called identifiers.

Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

Note: It is recommended to use descriptive names in order to create understandable and maintainable code:


// Good variable name
int minutesPerHour = 60;

//? OK, but not so easy to understand what m actually is
int m = 60;

The general rules for naming variables are:

Names can contain letters, digits and underscores
Names must begin with a letter or an underscore (_)
Names are case-sensitive (myVar and myvar are different variables)
Names cannot contain whitespaces or special characters like !, #, %, etc.
Reserved words (such as int) cannot be used as names
*/

//!Real-Life Examples:

// int main(){
// // Student data
// int studentID = 15;
// int studentAge = 23;
// float studentFee = 75.25;
// char studentGrade = 'B';

// // Print variables
// printf("Student id: %d\n", studentID);
// printf("Student age: %d\n", studentAge);
// printf("Student fee: %f\n", studentFee);
// printf("Student grade: %c", studentGrade);
//   return 0;
// }
#include <stdio.h>

int main() {
  // Create integer variables
  int length = 4;
  int width = 6;
  int area;

  // Calculate the area of a rectangle
  area = length * width;

  // Print the variables
  printf("Length is: %d\n", length);
  printf("Width is: %d\n", width);
  printf("Area of the rectangle is: %d", area);

  return 0;
}
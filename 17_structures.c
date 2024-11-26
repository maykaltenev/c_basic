

// You can create a structure by using the struct keyword and declare each of its members inside curly braces:


// struct MyStructure {   // Structure declaration
//   int myNum;           // Member (int variable)
//   char myLetter;       // Member (char variable)
// }; // End the structure with a semicolon

#include <stdio.h>
/*
//! Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // Create a structure variable of myStructure called s1
  struct myStructure s1;

  // Assign values to members of s1
  s1.myNum = 13;
  s1.myLetter = 'B';

  // Print values
  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);

  return 0;

}
*/
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  // Create a structure variable and assign values to it
  struct myStructure s1 = {13, 'B', "Some text"};

  // Print values
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

  return 0;
}
// Note: The order of the inserted values must match the order of the variable types declared in the structure (13 for int, 'B' for char, etc).


// Copy Structures
// You can also assign one structure to another.

// In the following example, the values of s1 are copied to s2:

// struct myStructure s1 = {13, 'B', "Some text"};
// struct myStructure s2;

// s2 = s1;
//!Modify Values
// struct myStructure {
//   int myNum;
//   char myLetter;
//   char myString[30];
// };

// int main() {
//   // Create a structure variable and assign values to it
//   struct myStructure s1 = {13, 'B', "Some text"};

//   // Modify values
//   s1.myNum = 30;
//   s1.myLetter = 'C';
//   strcpy(s1.myString, "Something else");

//   // Print values
//   printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

//   return 0;
// }

//struct myStructure {
//   int myNum;
//   char myLetter;
//   char myString[30];
// };

// int main() {
//   // Create a structure variable and assign values to it
//   struct myStructure s1 = {13, 'B', "Some text"};

//   // Modify values
//   s1.myNum = 30;
//   s1.myLetter = 'C';
//   strcpy(s1.myString, "Something else");

//   // Print values
//   printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

//   return 0;
// }
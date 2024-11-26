#include <stdio.h>

// int main() {
//   // Create an integer variable that will store the number we get from the user
//   int myNum;

//   // Ask the user to type a number
//   printf("Type a number and press enter: \n"); 

//   // Get and save the number the user types
//   scanf("%d", &myNum);

//   // Print the number the user typed
//   printf("Your number is: %d", myNum);

//   return 0;
// }
// !The scanf() function takes two arguments: the format specifier of the variable (%d in the example above) and the reference operator (&myNum), which stores the memory address of the variable.


// int main() {
//   // Create an int and a char variable
//   int myNum;
//   char myChar;

//   // Ask the user to type a number AND a character
//   printf("Type a number AND a character and press enter: \n");

//   // Get and save the number AND character the user types
//   scanf("%d %c", &myNum, &myChar);

//   // Print the number
//   printf("Your number is: %d\n", myNum);

//   // Print the character
//   printf("Your character is: %c\n", myChar);
  
//   return 0;
// }



int main() {
  // Create a string
  char fullName[30];

  // Ask the user to input some text (full name)
  printf("Type your full name and press enter: \n");

  // Get the text
  fgets(fullName, sizeof(fullName), stdin);

  // Output the text
  printf("Hello %s", fullName);
  
  return 0;
}

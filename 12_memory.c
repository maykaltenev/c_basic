#include <stdio.h>

// int main() {
//   int myAge = 43;
//   printf("%p", &myAge);
//   return 0;
// }


// int main() {
//   int myAge = 43;  // Variable declaration
//   int* ptr = &myAge;  // Pointer declaration

//   // Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
//   printf("%p\n", ptr);

//   // Dereference: Output the value of myAge with the pointer (43)
//   printf("%d\n", *ptr);
  
//   return 0;
// }

//In the example above, we used the pointer variable to get the memory address of a variable (used together with the & reference operator).

//You can also get the value of the variable the pointer points to, by using the * operator (the dereference operator):

// Note that the * sign can be confusing here, as it does two different things in our code:

// When used in declaration (int* ptr), it creates a pointer variable.
// When not used in declaration, it act as a dereference operator.
// Good To Know: There are two ways to declare pointer variables in C:

// int* myNum;
// int *myNum;
// Notes on Pointers

// Pointers are one of the things that make C stand out from other programming languages, like Python and Java.

// They are important in C, because they allow us to manipulate the data in the computer's memory. This can reduce the code and improve the performance. If you are familiar with data structures like lists, trees and graphs, you should know that pointers are especially useful for implementing those. And sometimes you even have to use pointers, for example when working with files and memory management.

// But be careful; pointers must be handled with care, since it is possible to damage data stored in other memory addresses


// int main() {
//   int myNumbers[4] = {25, 50, 75, 100};
//   int i;

//   for (i = 0; i < 4; i++) {
//     printf("%p\n", &myNumbers[i]);
//   }

//   return 0;
// }


 
int main() {
  int myNumbers[4] = {25, 50, 75, 100};

  // Change the value of the first element to 13
  *myNumbers = 13;

  // Change the value of the second element to 17
  *(myNumbers +1) = 17;

  // Get the value of the first element
  printf("%d\n", *myNumbers);

  // Get the value of the second element
  printf("%d\n", *(myNumbers + 1));  
  
  return 0;
}

// This way of working with arrays might seem a bit excessive. Especially with simple arrays like in the examples above. However, for large arrays, it can be much more efficient to access and manipulate arrays with pointers.

// It is also considered faster and easier to access two-dimensional arrays with pointers.

// And since strings are actually arrays, you can also use pointers to access strings.

// For now, it's great that you know how this works. But like we specified in the previous chapter; pointers must be handled with care, since it is possible to overwrite other data stored in memory.
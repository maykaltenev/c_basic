// enum Level {
//   LOW,
//   MEDIUM,
//   HIGH
// };
// //! An enum is a special type that represents a group of constants (unchangeable values).

// To create an enum, use the enum keyword, followed by the name of the enum, and separate the enum items with a comma:

//! Note that the last item does not need a comma.

// It is not required to use uppercase, but often considered as good practice.

// Enum is short for "enumerations", which means "specifically listed".

// int main() {
//   // Create an enum variable and assign a value to it
//   enum Level myVar = MEDIUM;

//   // Print the enum variable
//   printf("%d", myVar);

//   return 0;
// }

#include <stdio.h>

enum Level {
  LOW = 1,
  MEDIUM,
  HIGH
};

int main() {
  enum Level myVar = MEDIUM;
  
  switch (myVar) {
    case 1:
      printf("Low Level");
      break;
    case 2:
      printf("Medium level");
      break;
    case 3:
      printf("High level");
      break;
  }
   
  return 0;
}
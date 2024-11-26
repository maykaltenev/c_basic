#include <stdio.h>

// int main() {
//   int i = 0;
  
//   while (i < 5) {
//     printf("%d\n", i);
//     i++;
//   }
  
//   return 0;
// }

// int main() {
//   int i = 0;
  
//   do {
//     printf("%d\n", i);
//     i++;
//   }
//   while (i < 5);
  
//   return 0;
// }


int main() {
  // A variable with some specific numbers
  int numbers = 12345;
  
  // A variable to store the reversed number
  int revNumbers = 0;

  // Reverse and reorder the numbers
  while (numbers) {
    // Get the last number of 'numbers' and add it to 'revNumber'
    revNumbers = revNumbers * 10 + numbers % 10;
    // Remove the last number of 'numbers'
    numbers /= 10;
  }

  // Output the reversed numbers
  printf("%d", revNumbers);

  return 0;
}


#include <stdio.h>

// int main() {
//   int myNumbers[] = {25, 50, 75, 100};
//   printf("%d", myNumbers[0]);
 
//   return 0;
// }

// int main() {
// //   int myNumbers[] = {25, 50, 75, 100};

// //   for (int i = 0; i < 4; i++) {
// //     printf("%d\n", myNumbers[i]);
// //   }
 

//  // Declare an array of four integers:
//  int myNumbers[4];

//  // Add elements
//  myNumbers[0] = 25;
//  myNumbers[1] = 50;
//  myNumbers[2] = 75;
//  myNumbers[3] = 100;
//   return 0;
// }

// Making Better Loops
// In the array loops section in the previous chapter, we wrote the size of the array in the loop condition (i < 4). This is not ideal, since it will only work for arrays of a specified size.

// However, by using the sizeof formula from the example above, we can now make loops that work for arrays of any size, which is more sustainable.

// Instead of writing:

// int myNumbers[] = {25, 50, 75, 100};
// int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
// int i;

// for (i = 0; i < length; i++) {
//   printf("%d\n", myNumbers[i]);
// }

// int main() {
//    // An array storing different ages
//   int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
  
//   int i;
  
//   // Get the length of the array
//   int length = sizeof(ages) / sizeof(ages[0]);
  
//   // Create a 'lowest age' variable and assign the first array element of ages to it
//   int lowestAge = ages[0];

//   // Loop through the elements of the ages array to find the lowest age
//   for (i = 0; i < length; i++) {
  
//     // Check if the current age is smaller than current the 'lowest age'
//     if (lowestAge > ages[i]) {
    
//       // If the smaller age is found, update 'lowest age' with that element
//       lowestAge = ages[i];
//     }
//   }
 
//   // Output the value of the lowest age
//   printf("The lowest age in the array is: %d", lowestAge);
   
//   return 0;
// }


int main() {
  int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d\n", matrix[i][j]);
    }
  }
  
  return 0;
}

// //Parameters and Arguments
#include <stdio.h>
// Information can be passed to functions as a parameter. Parameters act as variables inside the function.

// Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma:


// returnType functionName(parameter1, parameter2, parameter3) {
//   // code to be executed
// }

// void myFunction(char name[]) {
//   printf("Hello %s\n", name);
// }

// int main() {
//   myFunction("Liam");
//   myFunction("Jenny");
//   myFunction("Anja");
//   return 0;
// }
// // Hello Liam
// // Hello Jenny
// // Hello Anja

int calculateSum(int x, int y) {
  return x + y;
}

int main() {
  // Create an array
  int resultArr[6];

  // Call the function with different arguments and store the results in the array
  resultArr[0] = calculateSum(5, 3);
  resultArr[1] = calculateSum(8, 2);
  resultArr[2] = calculateSum(15, 15);
  resultArr[3] = calculateSum(9, 1);
  resultArr[4] = calculateSum(7, 7);
  resultArr[5] = calculateSum(1, 1);

  for (int i = 0; i < 6; i++) {
    printf("Result%d is = %d\n", i + 1, resultArr[i]);
  }

  return 0;
}
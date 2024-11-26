#include <stdio.h>

int main() {
//   char greetings[] = "Hello World!";
//   printf("%s", greetings);
 char carName[] = "Volvo";
int length = sizeof(carName) / sizeof(carName[0]);
int i;

for (i = 0; i < length; ++i) {
  printf("%c\n", carName[i]);
}
  return 0;
}


int main() {
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("%d", strlen(alphabet));

//   char str1[20] = "Hello ";
// char str2[] = "World!";

//! // Concatenate str2 to str1 (result is stored in str1)
// strcat(str1, str2);

//! // Print str1
// printf("%s", str1);

char str1[20] = "Hello World!";
char str2[20];

// Copy str1 to str2
strcpy(str2, str1);

// Print str2
printf("%s", str2);
  return 0;
}

//! // In the Strings chapter, we used sizeof to get 
// the size of a string/array. Note that sizeof and 
// strlen behaves differently, as sizeof also includes
//  the \0 character when counting
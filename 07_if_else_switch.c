#include <stdio.h>

// int main() {
//   int time = 22;
//   if (time < 10) {
//     printf("Good morning.");
//   } else if (time < 20) {
//     printf("Good day.");
//   } else {
//     printf("Good evening.");
//   }
//   return 0;
// }

int main() {
  int day = 4;
  
  switch (day) {
  case 6:
    printf("Today is Saturday");
    break;
  case 7:
    printf("Today is Sunday");
    break;
  default:
    printf("Looking forward to the Weekend");
  }
  
  return 0;
}
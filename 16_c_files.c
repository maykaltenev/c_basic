//  FILE *fptr;
// // fptr = fopen(filename, mode);


// //filename	The name of the actual file you want to open (or create), like filename.txt
// // mode	A single character, which represents what you want to do with the file (read, write or append):
// // w - Writes to a file
// // a - Appends new data to a file
// // r - Reads from a file

// FILE *fptr;

// // Open a file in writing mode
// fptr = fopen("filename.txt", "w");

// // Write some text to the file
// fprintf(fptr, "Some text");

// // Close the file
// fclose(fptr);

// FILE *fptr;

// // Open a file in read mode
// fptr = fopen("filename.txt", "r");

// // Store the content of the file
// char myString[100];
// It requires a little bit of work to read a file in C. Hang in there! We will guide you step-by-step.


// fgets(myString, 100, fptr);

// #include <stdio.h>

// int main() {
//   FILE *fptr;

//   // Open a file in read mode
//   fptr = fopen("filename.txt", "r");

//   // Store the content of the file
//   char myString[100];

//   // Read the content and store it inside myString
//   fgets(myString, 100, fptr);

//   // Print file content
//   printf("%s", myString);  
  
//   // Close the file
//   fclose(fptr);

//   return 0;
// }
// Good Practice
// If you try to open a file for reading that does not exist, the fopen() function will return NULL.

// Tip: As a good practice, we can use an if statement to test for NULL, and print some text instead (when the file does not exist):

// FILE *fptr;

// // Open a file in read mode
// fptr = fopen("loremipsum.txt", "r");

// // Print some text if the file does not exist
// if(fptr == NULL) {
//   printf("Not able to open the file.");
// }

// // Close the file
//   FILE *fptr
// fclose(fptr);
// int main() {


//   // Open a file in read mode
// //   fptr = fopen("filename.txt", "r");

//   // Store the content of the file
//   char myString[100];

//   // If the file exist
//   if(fptr != NULL) {
  
//     // Read the content and print it
//     while(fgets(myString, 100, fptr)) {
//       printf("%s", myString);
//     }
    
//   // If the file does not exist 
//   } else {
//     printf("Not able to open the file.");
//   }

//   // Close the file
//   fclose(fptr);

//   return 0;
// }



// A function is a block of code which only runs when it is called.

// You can pass data, known as parameters, into a function.

#include <stdio.h>




// Example Explained
// myFunction() is the name of the function
// void means that the function does not have a return value. You will learn more about return values later in the next chapter
// Inside the function (the body), add code that defines what the function should do

// Call a Function
// Declared functions are not executed immediately. They are "saved for later use", and will be executed when they are called.

// To call a function, write the function's name followed by two parentheses () and a semicolon ;

// In the following example, myFunction() is used to print a text (the action), when it is called:


// Create a function
void myFunction() {
  printf("I just got executed!");
}
void calculateSum() {
  int x = 5;
  int y = 10;
  int sum = x + y;
  printf("The sum of x + y is: %d", sum);
}


int main() {
  myFunction(); 
  calculateSum();
  return 0;
}


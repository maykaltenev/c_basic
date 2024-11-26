// The process of reserving memory is called allocation. The way to allocate memory depends on the type of memory.

// C has two types of memory: Static memory and dynamic memory.

// Static Memory
// Static memory is memory that is reserved for variables before the program runs. Allocation of static memory is also known as compile time memory allocation.

// C automatically allocates memory for every variable when the program is compiled.

// For example, if you create an integer array of 20 students (e.g. for a summer semester), C will reserve space for 20 elements which is typically 80 bytes of memory (20 * 4):

// int students[20];
// printf("%lu", sizeof(students)); // 80 byt


// Dynamic Memory
// Dynamic memory is memory that is allocated after the program starts running. Allocation of dynamic memory can also be referred to as runtime memory allocation.

// Unlike with static memory, you have full control over how much memory is being used at any time. You can write code to determine how much memory you need and allocate it.

// Dynamic memory does not belong to a variable, it can only be accessed with pointers.

// To allocate dynamic memory, you can use the malloc() or calloc() functions. It is necessary to include the <stdlib.h> header to use them. The malloc() and calloc() functions allocate some memory and return a pointer to its address.

// int *ptr1 = malloc(size);
// int *ptr2 = calloc(amount, size);


// The malloc() function has one parameter, size, which specifies how much memory to allocate, measured in bytes.

// The calloc() function has two parameters:

// // amount - Specifies the amount of items to allocate
// // size - Specifies the size of each item measured in bytes


// Note: The data in the memory allocated by malloc() is unpredictable. To avoid unexpected values, make sure to write something into the memory before reading it.

// Unlike malloc(), the calloc() function writes zeroes into all of the allocated memory. However, this makes calloc() slightly less efficient.
// The best way to allocate the right amount of memory for a data type is to use the sizeof operator:

// #include <stdio.h>
// #include <stdlib.h>

// int *ptr1, *ptr2;
// ptr1 = malloc(sizeof(*ptr1));
// ptr2 = calloc(1, sizeof(*ptr2));

// Be careful: sizeof(*ptr1) tells C to measure the size of the data at the address. If you forget the * and write sizeof(ptr1) instead, it will measure the size of the pointer itself, which is the (usually) 8 bytes that are needed to store a memory address.

// Note: The sizeof operator cannot measure how much dynamic memory is allocated. When measuring dynamic memory, it only tells you the size of the data type of the memory. For example, if you reserve space for 5 float values, the sizeof operator will return 4, which is the number of bytes needed for a single float value.

// int *students;
// int numStudents = 12;
// students = calloc(numStudents, sizeof(*students));
// printf("%d", numStudents * sizeof(*students)); // 48 bytes

// Stack Memory
// For completeness, it is worth mentioning stack memory. Stack memory is a type of dynamic memory which is reserved for variables that are declared inside functions. Variables declared inside a function use stack memory rather than static memory.

// When a function is called, stack memory is allocated for the variables in the function. When the function returns the stack memory is freed.

// It is good to be aware of stack memory to be able to handle the memory usage of nested function calls and recursion. Recursion that repeats itself too many times may take up too much stack memory. When that happens it is called a stack overflow.

// It is good to be aware of stack memory to be able to handle the memory usage of nested function calls and recursion. Recursion that repeats itself too many times may take up too much stack memory. When that happens it is called a stack overflow.


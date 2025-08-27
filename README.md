# Pointers.cpp
# Name: Rajeev Ramesh Reddy E
# PRN: 24070123081

Aim: To study and implement pointers in C++.

Software Used: Vs Code.

Theory:
In C++, a pointer is a variable that stores the memory address of another variable. Pointers enable dynamic memory management, efficient array handling, and function argument manipulation. They are declared using the * operator and accessed using dereferencing (*) and address-of (&) operators. Pointers can point to any data type and are essential for building complex data structures like linked lists and trees. Understanding pointers is crucial for low-level programming and optimizing performance.

Syntax: 

    int a = 10;
    int *p = &a;     // p stores the address of a
    cout << *p;      // prints the value at address p (i.e., 10)

Algorithm:

1) Pointer increment algorithm.

   a. Start

   b. Declare an integer variable `a = 10`

   c. Declare an integer pointer `aptr`

   d. Assign address of `a` to `aptr` → `aptr = &a`

   e. Display address before incrementing → `&a`

   f. Increment pointer → `aptr++`

   g. Display address after incrementing → `aptr`

   h. Declare a float variable `f = 3.9`

   i. Declare a float pointer `fptr`

   j. Assign address of `f` to `fptr` → `fptr = &f`

   k. Display address before incrementing → `&f`

   l. Increment pointer → `fptr++`

   m. Display address after incrementing → `fptr`

   n. Declare a double variable `d = 9.432645`

   o. Declare a double pointer `dptr`

   p. Assign address of `d` to `dptr` → `dptr = &d`

   q. Display address before incrementing → `&d`

   r. Increment pointer → `dptr++`

   s. Display address after incrementing → `dptr`

   t. Declare a boolean variable `b = true`

   u. Declare a boolean pointer `bptr`

   v. Assign address of `b` to `bptr` → `bptr = &b`

   w. Display address before incrementing → `&b`

   x. Increment pointer → `bptr++`

   y. Display address after incrementing → `bptr`

   z. End


2) Addition and Difference using pointer algorithm.

   a. Start

   b. Declare and initialize an integer array:
      - arr[] = {80, 30, 350, 490, 590}

   c. Declare two integer pointers:
      - ptr1 → points to arr[2]
      - ptr2 → points to arr[4]

   d. Compute the difference between values pointed by ptr2 and ptr1:
      - diff = *ptr2 - *ptr1

   e. Display the result:
      - "The Difference is: " followed by diff

   f. Compute the addition of values pointed by ptr2 and ptr1:
      - add = *ptr2 + *ptr1

   g. Display the result:
      - "The addition is: " followed by add

   h. End

3) Pointer string algorithm.

   a. Start

   b. Declare a character array `str[10000]` to store input string

   c. Prompt user to enter a string  
      → Store input in `str`

   d. Declare a character pointer `ptr`  
      → Initialize it with the base address of `str` → `ptr = str`

   e. Display message: "You entered:"

   f. Loop while `*ptr != '\0'` (until end of string)
      - Print character pointed by `*ptr`
      - Increment pointer → `ptr++`

   g. End

4) Pointer array reverse algorithm.

   a. Start

   b. Declare and initialize an integer array:
      - arr[] = {20, 40, 60, 80}

   c. Declare an integer pointer `ptr`  
      → Initialize it to point to the last element → `ptr = arr + 3`

   d. Display message: "Traversing array:"

   e. Loop through `i` from 0 to 3
      - Access element using pointer arithmetic → `*(ptr - 3 + i)`
      - Print the value

   f. Print newline

   g. Display message: "Traversing array in reverse:"

   h. Loop through `i` from 0 to 3
      - Access element using pointer arithmetic → `*(ptr - i)`
      - Print the value

   i. End


Conclusion:
Pointers in C++ are essential tools for accessing and manipulating memory directly. They enable dynamic memory allocation, efficient data handling, and flexible function calls. Mastering pointers enhances control over program behavior and performance, making them a foundational concept for advanced programming and system-level development.

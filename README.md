# Implement-CPP-Pointer-
Aim:
To study and implementation of pointer basics in C++

Software used:
Mingw compiler, visual studio code, online C++ compiler

Program 1 Different ways to display pointer's output
Explanation and theory of code: This C++ program demonstrates the concept of pointers. It declares an integer variable a with a value of 146 and a pointer p that stores the address of a. The program then prints the value of a, its memory address, the value stored in p (which is the address of a), and the value pointed to by p using the dereference operator *. This shows how pointers can be used to access and manipulate data stored at specific memory locations, a fundamental concept in memory management.

Algorithm:

Start
Declare an integer variable a and assign it the value 146.
Declare a pointer p and assign it the address of a.
Print the value of a.
Print the address of a using &a.
Print the value of pointer p (i.e., address of a).
Print the value pointed to by p using *p.
End
Program 2 Updating new value to variable with pointer
Explanation and theory of code: This program illustrates pointer usage and array access in C++. An integer a is initialized to 123, and a pointer p stores its address. Dereferencing p (*p) prints the value of a. Then, *p = 456 updates a through the pointer. The program also declares an integer array and prints its first element using *array, which is equivalent to array[0]. This showcases how pointers can modify variables and access array elements efficiently.

Algorithm:

Start
Declare integer a = 123
Declare pointer p = &a
Print value pointed by p (*p)
Update value at p to 456
Print new value of a
Declare array of 5 integers
Print first element of array using *array
End
Program 3 Incrementation of pointer
Explanation and theory of code: This program demonstrates pointer arithmetic with arrays in C++. An integer array a is initialized with five values. A pointer p is assigned to point to the first element of the array (a). The program first prints the value pointed to by p, which is 10. Then, using a loop, it prints each element of the array by incrementing the pointer. Since arrays and pointers are closely related in C++, p++ moves the pointer to the next element, allowing sequential access to array values.

Algorithm:

Start
Declare array a[5] = {10, 20, 30, 40, 50}
Initialize pointer p = a
Print value pointed to by p (first element)
Loop from i = 0 to 4:
Print value pointed to by p
Increment pointer p++
End
Conclusion
These three C++ programs effectively demonstrate the fundamentals of pointers and their relationship with variables and arrays. The first code shows how a pointer stores and accesses the address and value of a single variable. The second illustrates how pointers can modify the value of a variable directly and access array elements. The third highlights pointer arithmetic, where incrementing a pointer allows traversal through an array. Together, these examples reinforce how pointers provide powerful control over memory and data manipulation, making them essential tools for efficient programming, especially in systems-level and performance-critical applications.

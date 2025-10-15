#include <stdio.h>

int main(){
    // 1 Write a program to print the address of a variable. Use this address to get the value of the variable.
    int a  = 2;
    int* ptr = &a;
    printf("The address of a is %p\n", &a);
    printf("The address of a is %u\n", &a);
    printf("The value of a is %d\n", *ptr);

    // 2 Write a program having a variable i. Print the address of i. Pass this variable to a function and print its address. Are these addresses same? Why?
    // 3 Write a program to change the value of a variable to ten times of its current value.
    // 4 Write a function and pass the value by reference.
    // 5 Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average of two numbers. Use pointers and print the values of sum and average in main().
    // 6 Write a program to print the value of a variable i by using "pointer to pointer" type of variable.
    // 7 Try problem 3 using call by value and verify that it does not change the value of the said variable.

    return 0;
}
#include <stdio.h>
int  returning_5(int *);
void change_to_ten_times(int*);
    int returning_5(int* ptr){
        printf("The value of ptr is %d\n", ptr);
        printf("The value at ptr is %d\n", *ptr);
        return 5;
    }

    void change_to_ten_times(int* a){
        *a = *a * 10;
    }
    void ref(int* n){
        int* temp = n;
        *n = 5;
    }
    int* sum(int a, int b){
        int sum = a+b;
        int * ptr = &sum;
        printf("The sum is %d\n", sum);
        return ptr;
    }

    float* average(int a, int b){
        float avg = (a+b)/2.0;
        float* ptr = &avg;
        printf("The average is %f\n", avg);
        return ptr;
    }
int main(){
    // 1 Write a program to print the address of a variable. Use this address to get the value of the variable.
    int a  = 2;
    int* ptr = &a;
    printf("The address of a is %p\n", &a);
    printf("The address of a is %u\n", &a);
    printf("The value of a is %d\n", *ptr);
    // 2 Write a program having a variable i. Print the address of i. Pass this variable to a function and print its address. Are these addresses same? Why?
    returning_5(ptr);

    // 3 Write a program to change the value of a variable to ten times of its current value.
    int x = 45;
    printf("The value of x is %d\n", x);
    change_to_ten_times(&x);
    printf("The value of x is %d\n", x);
    // 4 Write a function and pass the value by reference.
    int b = 3;
    printf("The value of b is %d\n", b);
    ref(&b);
    printf("The value of b is %d\n", b);
    // 5 Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average of two numbers. Use pointers and print the values of sum and average in main().
    int * ptr1 = sum(3,4);
    float * ptr2 = average(3,4);
    
    printf("The address of sum is %u and average is %u\n", ptr1, ptr2);
    // 6 Write a program to print the value of a variable i by using "pointer to pointer" type of variable.
    int v = 24;
    int* p = &v;
    printf("%d", p);
    // 7 Try problem 3 using call by value and verify that it does not change the value of the said variable.

    return 0;
}

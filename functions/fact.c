#include<stdio.h>

int factorial(int n);
int fibonacci(int n);
   int factorial(int n){

    if(n == 1 || n == 0){ // base case
        return 1;
    }
    return factorial(n-1) * n; // recursive step
   }
int fibonacci(int n){
    if(n == 0)          // base case 1
        return 0;
    if(n == 1)          // base case 2
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);   // recursive step
}
   

int main(){

    // printf("%d",factorial(4));
    printf("%d", fibonacci(6));
    return 0;
}
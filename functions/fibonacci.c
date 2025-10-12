#include <stdio.h>
// int fibonacci(int n) {
//     int a = 0;
//     int b = 1;
//     int c = 0;

//     if (n == 1) {
//         return a;  // first Fibonacci number
//     }
//     if (n == 2) {
//         return b;  // second Fibonacci number
//     }

//     for (int i = 3; i <= n; i++) {
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return c;
// }

int fibonacci(int);
int fibonacci(int n){
    if(n == 1 || n == 2){
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n = 5;
    printf("The value of fibonacci series at %d is %d", n, fibonacci(n));
    return 0;
}

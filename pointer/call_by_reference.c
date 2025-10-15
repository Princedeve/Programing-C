#include <stdio.h>
int sum(int*, int*);

int sum(int* a, int* b){ // copy
    *a = 5;
    return *a + *b;
}
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int x = 1, y = 6;
    printf("The sum of 1 and 6 is %d\n", sum(&x, &y));
    printf("The value of x is %d\n", x);
    swap(&x, &y);
    printf("The value of x is %d y is %d\n", x, y);

    return 0;
}
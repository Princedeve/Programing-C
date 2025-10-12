#include <stdio.h>
int main(){
    int i = 72;
    printf("The address of i is %p\n", &i); //%u for integer
    // %p for pointer real address
    int* j = &i;//j is a pointer pointing to i
    printf("%%u is %u\n", j);
    printf("%%p is %p\n", j);
    printf("%%d is %d\n", j);

    return 0;
}
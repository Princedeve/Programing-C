#include <stdio.h>
int main(){
    int i = 72;
    printf("i is %d\n", i); //%u for integer
    // %p for pointer real address
    int* j = &i;//j is a pointer pointing to i
    printf("%%u is %u\n", j);
    printf("%%p is %p\n", j);
    printf("%%d is %d\n\n", j);

    char c = 'A';
    printf("c is %c\n", c);
    char* cd = &c;
    printf("%%u is %u\n", cd);
    printf("%%p is %p\n", cd);
    printf("%%d is %d\n\n", cd);

    float f = 5.232;
    printf("f is %f\n", f);
    float* fd = &f;
    printf("%%u is %u\n", fd);
    printf("%%p is %p\n", fd);
    printf("%%d is %d\n\n", fd);
    return 0;
}
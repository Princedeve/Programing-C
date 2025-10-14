#include <stdio.h>

int main(){
    int i = 6;
    int* j = &i;
    int** k = &j;
    printf("The value of i is %d\n", i);
    printf("The value of j is %d\n", *j);
    printf("The value of k is %d\n", **k);
    printf("The value of j is %d\n", **(&j));
// *(&) curt hoga

    return 0;
}
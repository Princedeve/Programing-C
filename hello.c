#include <stdio.h>

int fact(int n){
    if(n == 1|| n==0){
        return 1;
    }
    return fact(n-1)*n;
}

int main(){
    // int fact = 1;
    // int n ;
    // printf("enter number\n");
    // scanf("%d", &n);

    // for(int i = 1; i<=n; i++){
    //     fact = fact * i;
    // }
    // printf("%d", fact);
    int n = fact(5);
    printf("%d", n);
    return 0;
}
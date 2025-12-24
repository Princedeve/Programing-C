#include <stdio.h>
#include <stdlib.h>
// int squre(int n){
//     printf("%d Bytes\n", sizeof(int));
//     printf("%d Bytes\n", sizeof(n));
//     return (n*n);
// }

int add(int arr[], int n){
    int sum = 0, i;
    // dynamic runtime space genrate hoga
    printf("Arrays Size %d Bytes\n", sizeof(arr[0])*n);
    // fixed space genrate hogi 
    printf("%d Bytes\n", sizeof(int));
    printf("%d Bytes\n", sizeof(n));
    printf("%d Bytes\n", sizeof(i));
    printf("%d Bytes\n", sizeof(sum));
    for(i = 0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    // int i = 1;
    // while (i <= 10)
    // {
    //     printf("%d", i);
    //     i++;
    // }

    // int num = 3;
    // int value = squre(num);
    // printf("%d", value);
    
    int size; 
    printf("enter Arrays size: ");
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int result = add(arr, size);

    printf("%d", result);
    return 0;
}
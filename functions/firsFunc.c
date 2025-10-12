#include<stdio.h>
// #include<stdlib.h>
#include<math.h>

float c2f(float);
float c2f(float c){
    float f = (((9.0/5.0) * c) +32);
    return f;
}

float averageFind(float a, float b, float c){
    float n = a+b +c;
        return n/3.0;
}

float force(float);
float force(float mass){
    return mass * 9.8;
}

int sum(int n){
    if(n == 1){
        return 1;
    }

    return sum(n-1) + n;
}

char pattern(int n){
for(int i = 0; i<n; i++){
        for(int j = 0; j<2*i+1; j++){
            printf("*");
        }
        printf("\n\n");
    }
}
int main(){

    // int n;
    // printf("enter number : ");
    // scanf("%d", &n);
    // int c1, c2;
    // c1 = 0, c2 = 0;
    // for(int i = 1; i <=n; i++){
    //     c1++, c2++;
    //     if(c1== 3){
    //         printf("fizz\n");
    //         c1 = 0;
    //     }else if(c2 == 5){
    //         printf("buzz\n");
    //         c2 = 0;
    //     }else{
    //         printf("%d\n", i);
    //     }
        
    // }
   
//    float a = averageFind(3,6,5);

//    printf("%.2f", a);
    // int a = 5;
    // printf("%0.2f", pow(a, 2));

    // printf("%.2f", c2f(45));
    // int m = 45;

    // printf("%.2f", force(m));
    // int n = 4;
    // printf("%d %d %d", n, ++n, n++);
    // 6 = n, 6 = ++n, 4 = n++ evaluate oder he islye yani right to left
    // 4 5 5 dono sahi he ager evaluation oder left to right he to ye agega
    // printf("%d", sum(5));
    pattern(3);
        return 0;
}
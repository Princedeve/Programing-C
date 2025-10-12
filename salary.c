#include <stdio.h>

int main(){
//    int a = 1;
//    int b = 2;
// //    a>b ? printf("a is greater") : printf("b is greater");

// int a ;
// printf("enter number: ");`
// scanf("%d", &a);

// switch(a){
//     case 1:
//     printf("you enter 1");
//     break;
//     default:
//     printf("you are not enter 1");

// }

// int marks1, marks2, marks3;
// printf("enter marks1: \n");
// scanf("%d", &marks1);
// printf("enter marks2: \n");
// scanf("%d", &marks2);
// printf("enter marks3: \n");
// scanf("%d", &marks3);

// if(marks1<33 || marks2<33|| marks3<33 ){
//     printf("You are failed due to less marks in individual subject(s)\n");
// }
// else if((marks1 + marks2 + marks3)/3 < 40){
//     printf("you are failed\n");
// }
// else{
//     printf("you are passed");
// }

float salary;
printf("enter salary: ");
scanf("%f", &salary);

if (salary >= 300000.0 && salary <= 700000.0)
{
float t = (salary*5)/100;
   printf("tax of 5%% is: %.2f\n", t);
   printf("After tax salary is: %.2f\n", salary-t);
   printf("And per month salary is: %.2f", (salary-t)/12);
}else if (salary >700000.0 && salary <= 1000000.0)
{
    float t = (salary*10)/100;
    printf("tax of 10%% is: %.2f\n", t);
    printf("After tax salary is: %.2f\n", salary-t);
    printf("And per month salary is: %.2f", (salary-t)/12);
}else if (salary > 1000000.0 && salary <= 1200000.0)
{
    float t = (salary*15)/100;
    printf("tax of 15%% is: %.2f\n", t);
    printf("After tax salary is: %.2f\n", salary-t);
    printf("And per month salary is: %.2f", (salary-t)/12);
}else if (salary > 1200000.0 && salary <= 1500000.0)
{
    float t = (salary*20)/100;
    printf("tax of 30%% is: %.2f\n", t);
    printf("After tax salary is: %.2f\n", salary-t);
    printf("And per month salary is: %.2f", (salary-t)/12);
}else if (salary > 1500000.0)
{
    float t = (salary*30)/100;
    printf("tax of 30%% is: %.2f\n", t);
    printf("After tax salary is: %.2f\n", salary-t);
    printf("And per month salary is: %.2f", (salary-t)/12);
}
    return 0;
}
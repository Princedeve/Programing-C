#include <stdio.h>

int main(){
  int n, isPrime = 1;
  printf("enter number: ");
  scanf("%d", &n);

  // if(n < 2){ // n == 0 || n == 1
  //   isPrime = 0;
  // }else{
  //   for(int i = 2; i*i<=n; i++){// i*i is root tak only check
  //   if(n % i == 0 && n!= 2){
  //     isPrime = 0;
  //     break;
  //   }
  // }
  // }

  // (isPrime)? printf("%d is Prime", n): printf("%d is not Prime", n);

//   int i = 2;
//   if(n<2){
//     isPrime = 0;

//   }else{

// while(i*i<=n){

// if(n%i == 0 && n != 2){
//   isPrime = 0;
// }
// i++;
//  }}

//   (isPrime)? printf("%d is a Prime number", n): printf("%d is not a Prime number", n);
  
 int i = 2;
  if(n<2){
    isPrime = 0;

  }else{
    do{
      if(n%i==0 && n!=2){
        isPrime = 0;
      }
      i++;
    }while(i*i<=n);
  }

  (isPrime)? printf("%d is a Prime number", n): printf("%d is not a Prime number", n);
    return 0;
}
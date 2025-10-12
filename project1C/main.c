#include <stdio.h>
#include <stdlib.h>// isme rand() function hota he
#include <time.h>// srand(time(0)) he
int main(){
    srand(time(0));

    // int randomNumber = (rand() % 100) + 1;

    // // printf("Ramdom Number is : %d\n", randomNumber);
    // int no_of_guesses = 0;
    // int guessed;

    // do{
    //     printf("Guess the Number\n");
    //     scanf("%d", &guessed);
    //     if(guessed < randomNumber){
    //         printf("your number is lower\n");
    //     }else if(guessed > randomNumber){
    //         printf("your number is higer\n");
    //     }else{
    //         printf("you win\n");
    //         break;
    //     }
    //     no_of_guesses++;
    // }while(guessed != randomNumber);
    
    // printf("You guessed the Number in %d guesses", no_of_guesses);

    int randomNumber = (rand() % 100) + 1;

    int guessed;
    int no_of_guesses = 0;
    for(no_of_guesses; guessed != randomNumber; no_of_guesses++){
        printf("Guess the number \n");
        scanf("%d", &guessed);
        if(guessed < randomNumber){
            printf("you number is lower\n");
        }else if(guessed > randomNumber){
            printf("your number is higer\n");
        }else{
            printf("you win");
            break;
        }
    }
    printf("Number of guess is: %d", no_of_guesses);

    return 0;
}
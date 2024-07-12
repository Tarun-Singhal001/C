// Write a programme in which a random number is generated and then ask user to input number if number is greater than show lower else show higher 

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    
    srand(time(0));
    int randomNum = (rand()%100)+1;
    int no_of_guesses = 0;
    int guess;
    printf("Guess the number: ");
    scanf("%d",&guess);
    while(guess != randomNum){
        if(guess < randomNum) {
            printf("Think higher\n");
            scanf("%d",&guess);
        }
        else {
            printf("Think lower\n");
            scanf("%d",&guess);
        } 
        no_of_guesses++;
    }
    printf("You got it \n");
    printf("Number of guesses: %d\n",no_of_guesses);
    return 0;
}
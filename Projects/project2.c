// Snake, water, gun or rock, paper, scissors is a game most of us have played during
// school time. (I sometimes play it even now).
// Write a C program capable of playing this game with you. 
// Your program should be able to print the result after you choose snake/water or gun.

#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    srand(time(0));
    int computer = rand()%3;
    int player;
    printf("Enter your choice 0 for snake,1 for water and 2 for gun: ");
    scanf("%d",&player);
    printf("Opponent's choice: ");
    if(computer == 0) printf("snake\n");
    else if(computer == 1) printf("water\n");
    else printf("gun\n");
    if(player == computer){
        printf("It's a draw.");
    }
    else if(player > 2){
        printf("Invalid input. Please enter 0 for snake, 1 for water, or 2 for gun.");
        return 0;
    }
    else if(player == 0 && computer == 1){
        printf("You win!");
    }
    else if(player == 0 && computer == 2){
        printf("Nice try!");
    }
    else if(player == 1 && computer == 0){
        printf("Nice try!"); //
    }
    else if(player == 1 && computer == 2){
        printf("You win!");
    }
    else if(player == 2 && computer == 0){
        printf("You win!");
    }
    else if(player == 2 && computer == 1){
        printf("Nice try!");
    }
}
// Write a program to determine whether a character entered by the user is lowercase or not.

#include <stdio.h>
    
int main() {
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    if(character >= 'a'){
        printf("%c is lowercase.\n", character);
    }
    else{
        printf("%c is uppercase.\n", character);
    }
    return 0;
}
// Write a program to check whether a number is divisible by 97 or not.
#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num%97 == 0) printf("Number is divisible by 97\n");
    else printf("Number is not divisible by 97\n");
    return 0;
}
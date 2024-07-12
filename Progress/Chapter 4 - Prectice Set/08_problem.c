// Write a program to calculate the factorial of a given number using a for loop

#include <stdio.h>
    
int main() {
    int num = 10;
    int fact = 1;
    for(int i=1;i<=num;i++){
        fact = fact*i;
    }
    printf("%d\n",fact);
    return 0;
}
// Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>
    
int main() {
    int num = 10;
    int sum = 0;
    while(num>0){
        sum += num;
        num--;
    }
    printf("%d",sum);
    return 0;
}
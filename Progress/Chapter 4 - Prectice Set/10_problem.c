// Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>
    
int main() {
    int num = 2;
    for(int i=2;i<num;i++){
        if(num%i == 0){
            printf("%d is not prime",num);
            return 0;
        }
    }
    printf("%d is prime", num);
    return 0;
}
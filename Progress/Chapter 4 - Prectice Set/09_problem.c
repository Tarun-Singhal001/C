// Repeat 8 using while loop.

#include <stdio.h>
    
int main() {
    int num = 10;
    int fact = 1;
    while(num){
        fact *= num;
        num--;
    }
    printf("%d\n", fact);
    return 0;
}
// Try problem 3 using call by value and verify that it does not change the value of the said variable.
#include <stdio.h>

void callByValue(int x) {
    x = x * 10;
    printf("Inside call by value: x = %d\n", x);
}
int main() {
    int i = 25;
    
    printf("Before call by value: i = %d\n", i);
    
    callByValue(i);
    return 0;
}
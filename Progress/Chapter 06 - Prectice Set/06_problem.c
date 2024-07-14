// Write a program to print the value of a variable i by using “pointer to pointer” type of variable.
#include <stdio.h>
    
int main() {
    int i = 10;
    int* pi = &i;
    int** ppi = &pi;
    printf("Value of i is %d\n",**ppi);
    return 0;
}
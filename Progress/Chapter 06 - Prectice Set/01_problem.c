// Write a program to print the address of a variable. Use this address to get the value of the variable.
#include <stdio.h>
int main() {
    int a = 390;
    int* ptr = &a;
    address(&a);
    printf("Address is: %d\n",ptr);
    printf("Value is: %d\n",*ptr);
    return 0;
}
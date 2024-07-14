// Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why?
#include <stdio.h>
void address(int *a){
    printf("Address is: %d\n",a);
    return;
}
int main() {
    int i = 10;
    printf("Address is: %d\n",&i);
    address(&i);
    return 0;
}
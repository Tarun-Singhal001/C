// Write a function and pass the value by reference.
#include <stdio.h>
void ten_times(int* a){
    *a *= 10;
    printf("Inside function: i = %d\n", *a);
}
int main() {
    int i = 10;
    printf("Before function call: i = %d\n", i);
    ten_times(&i);
    return 0;
}
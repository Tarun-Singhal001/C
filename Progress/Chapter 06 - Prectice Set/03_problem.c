// Write a program to change the value of a variable to ten times of its current value
#include <stdio.h>
void change_to_ten_times(int *a){
    *a *= 10;
    printf("New value of n: %d\n", *a);
}
int main() {
    int n = 25;
    printf("Current value of n: %d\n", n);
    change_to_ten_times(&n);
    return 0;
}
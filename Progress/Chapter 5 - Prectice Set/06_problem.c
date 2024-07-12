// Write a recursive function to calculate the sum of first ‘n’ natural numbers.
#include <stdio.h>
    int sum(int n){
        if(n == 1) return 1;
        return n+ sum(n-1);
    }
int main() {
    int a = sum(10);
    printf("The sum of first 10 elements is: %d\n",a );
    return 0;
}
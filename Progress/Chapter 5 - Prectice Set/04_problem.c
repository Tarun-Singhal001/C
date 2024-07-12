// Write a program using recursion to calculate nth element of Fibonacci series.

#include <stdio.h>
// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 0) {
        return 0; // Base case: the 0th Fibonacci number is 0
    } else if (n == 1) {
        return 1; // Base case: the 1st Fibonacci number is 1
    } else {
        // Recursive case: the nth Fibonacci number is the sum of the (n-1)th and (n-2)th Fibonacci numbers
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to print the Fibonacci series up to n
void printFibonacciSeries(int n) {
    for (int i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n = 10;
    printf("Fibonacci series up to %d: ", n);
    printFibonacciSeries(n);
    return 0;
}

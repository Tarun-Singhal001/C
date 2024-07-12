#include <stdio.h>
    int factorial(int);
        // Factorial(5) = 1 X 2 x 3 X 4 X 5
        // Factorial(4) = 1 X 2 x 3 X 4
        // Factorial(3) = 1 X 2 X 3
        // Factorial(2) = 1 X 2
        // Factorial(1) = 1
        // Factorial(0) = 1

        int factorial(int n){
            if(n == 1 || n== 0){
                // Base condition
                return 1;
            }
            // Factorial(n) = Factorial(n-1) X n
            return n * factorial(n-1);
        }
int main() {
    int a = 2;
    printf("The factorial of %d is %d",a,factorial(a));
    return 0;
}
// Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().
#include <stdio.h>

int sum_of_numbers(int a,int b){
    return a + b;
}    
int avg_of_numbers(int a,int b){
    return (a+b)/2;
}
int main() {
    int num1 = 10,num2 = 20;
    int sum = sum_of_numbers(num1,num2);
    int avg = avg_of_numbers(num1,num2);
    printf("sum of %d and %d is %d \n",num1,num2,sum);
    printf("average of %d and %d is %d \n",num1,num2,avg);
    return 0;
}
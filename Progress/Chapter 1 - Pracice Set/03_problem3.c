// Write a program to convert Celsius to Fahrenheit (Centigrade degrees temperature to Fahrenheit).
#include <stdio.h>
    
int main() {
    int temp = 37;
    float fahrenheit = (temp * 9.0/5.0) + 32;
    printf("Temperature is %0.1f\n", fahrenheit);
    
    return 0;
}
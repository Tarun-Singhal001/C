// Write a program with a structure representing a complex number.
#include <stdio.h>
typedef struct complex{
    float real, imaginary;
}comp;
int main() {
    comp num1;
    comp* ptr1 = &num1;
    (*ptr1).real = 10;
    (*ptr1).imaginary = 1;

    // ptr1 -> real = 1;
    // ptr1 -> imaginary = 2;
    printf("complex number is %0.0f + %0.0fi\n",num1.real,num1.imaginary);
    printf("complex number is %0.0f + %0.0fi",ptr1->real,ptr1->imaginary);
    return 0;
}
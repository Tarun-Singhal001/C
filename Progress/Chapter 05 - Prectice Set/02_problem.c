//  Write a function to convert Celsius temperature into Fahrenheit.
#include <stdio.h>
    void C_to_F(int num){

        float f = (num*9/5)+32;
        printf("%d Celsius is equal to %.2f Fahrenheit\n", num, f);
    }
int main() {

    C_to_F(50);
    return 0;
}
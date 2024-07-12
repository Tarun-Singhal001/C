// Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.
#include <stdio.h>
    
int main() {
    // Calculate area of circle.
    int radi = 5;
    int height = 10;
    float area = radi * radi * 3.14159;
    printf("Area of circle with radius %d is %0.2f\n",radi, area);
    printf("volume of cylinder of radius %d and height %d is %0.2f\n",radi ,height ,area*height);
    return 0;
}
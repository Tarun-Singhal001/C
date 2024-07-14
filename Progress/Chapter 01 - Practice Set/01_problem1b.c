// Write a C program to calculate area of a rectangle:
//     b. Using inputs supplied by the user.
#include <stdio.h>
    
int main() {
    int length,width,ans;
    printf("Enter Length: ");
    scanf("%d",&length);
    printf("Enter Width: ");
    scanf("%d", &width);
    ans = length*width;
    printf("Area of the rectangle is %d", ans);
    return 0;
}
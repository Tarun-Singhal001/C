// Write a program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and atleast 33% in each subject. Assume there are three subjects and take the marks as input from the user.

#include <stdio.h>
    
int main() {
    int p,c,m,b;
    p=35,c=35,m=35,b=90;
    if(p<33 || c<33 || m<33 || b<33){
        printf("Failed\n");
    }
    else if((p+c+m+b)/4 < 40){
        printf("Failed\n");
    }
    else{
        printf("Hey! You did it\n");
    }

    return 0;
}
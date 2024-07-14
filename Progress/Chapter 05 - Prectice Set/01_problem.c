//  Write a program using function to find average of three numbers.
#include <stdio.h>
    float avg(int a,int b,int c){
        return (a + b + c) / 3.0;
    }
int main() {
    int a = 5,b = 8,c = 16;
    float ans = avg(a,b,c);
    printf("%0.2f\n",ans);
    return 0;
}
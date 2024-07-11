// Explain step by step evaluation of 3*x/y-z+k,where x=2,y=3,z=3,k=1.

#include <stdio.h>
    
int main() {
    int k = 1,x =2,y =3,z = 3;
    // 3*2/3-3+1;
    // 6/3-3+1;
    // 2-3+1;
    // -1+1;
    // 0;
    // So, the final result of 3*x/y-z+k is 0.
    // Printing the result using printf statement.
    printf("ans is :  %d", 3*x/y-z+k);
    return 0;
}
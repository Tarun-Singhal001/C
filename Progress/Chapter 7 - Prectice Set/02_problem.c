// If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
// (i) True.
// (ii) False.
// (iii) Depends.
#include <stdio.h>
    
int main() {
    int s[3] = {1, 2, 3};
    int* ptr = s;
    printf("S+3 value is %d\n",*(ptr+3));
    return 0;
}
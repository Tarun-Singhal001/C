// Create a two-dimensional vector using structures in C.
#include <stdio.h>
struct vector{
    int i;
    int j;
};
int main() {
    struct vector v1;
    v1.i = 1;
    v1.j = 2;
    printf("The value of vector is %di + %dj",v1.i,v1.j);
    return 0;
}
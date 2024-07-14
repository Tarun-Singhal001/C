#include <stdio.h>
    
int main() {
    int a = 1;int b=1;
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("The value of no(a) is %d\n", !a);
    if (a && b ){
        printf("both are true\n");
    }
    if(a){
        if(b){
            printf("bothe are true");
        }
    }
    return 0;
}
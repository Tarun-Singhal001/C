// Implement Q - 10 using other types of loops.
#include <stdio.h>
    
int main() {
    int num = 2;
    int i = 2;
    while(i<num){
        if(num%i == 0){
            printf("%d is not prime\n",num);
            return 0;
        }
        i++;
    }
    printf("%d is prime\n",num);
    return 0;
}
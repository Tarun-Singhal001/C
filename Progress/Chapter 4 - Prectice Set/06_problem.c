// Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.

#include <stdio.h>
    
int main() {
    int sum = 0;
    for(int i=1;i<=10;i++){
        sum += i;
    }
    printf("%d\n",sum);

    sum = 0;
    int i = 0;
    do{
        sum += i;
        i++;
    }while(i<=10);
    printf("%d\n",sum);

    return 0;
}
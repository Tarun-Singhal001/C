//  Repeat problem 3 for a general input provided by the user using scanf.
#include <stdio.h>
    
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i] = num * (i+1);
        printf("%d x %d = %d\n", num, i+1, arr[i]);
    }
    return 0;
}
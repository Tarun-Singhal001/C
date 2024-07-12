// Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively.

#include <stdio.h>
    
int main() {
    int arr[3][10];
    for(int i=0;i<10;i++){
        arr[0][i] = 2*(i+1);
    }
    for(int i=0;i<10;i++){
        arr[1][i] = 7*(i+1);
    }
    for(int i=0;i<10;i++){
        arr[2][i] = 9*(i+1);
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
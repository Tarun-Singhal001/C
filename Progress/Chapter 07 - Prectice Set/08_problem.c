// Repeat problem 7 for a custom input given by the user
#include <stdio.h>
    
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int table[n];
    for(int i=0;i<n;i++){
        printf("Enter the no.: ");
        scanf("%d", &table[i]);
    }
    int arr[n][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<10;j++){
            arr[i][j] = table[i] * (j+1);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<10;j++){
            printf("%d X %d = %d\n",table[i],j+1,arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// Twenty integers are to be stored in memory. What will you prefer- Array or structure?
#include <stdio.h>
    
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
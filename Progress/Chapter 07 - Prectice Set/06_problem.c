// Write a program containing functions which counts the number of positive integers in an array.
#include <stdio.h>
void count_neg(int* arr,int size){
    int count = 0;
    for(int i=0;i<size;i++){
        if(arr[i] <0){
            count++;
        }
    }
    printf("Number of negative integers: %d\n", count);
}
int main() {
    int arr[10] = {10,20,-52,-2,3,0,150,-1,981,-1000};
    int count = 0;
    count_neg(arr,10);

    return 0;
}
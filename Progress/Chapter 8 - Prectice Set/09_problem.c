// Write a program to check whether a given character is present in a string or not.
#include <stdio.h>
void find(char* str,char character){
    int i=0;
    while(str[i] != '\0'){
        if(str[i] == character){
            printf("Character found at index %d\n", i);
            return;
        }
        i++;
    }
}
int main() {
    char str[] = "Find in this string";
    find(str,'s');
    return 0;
}
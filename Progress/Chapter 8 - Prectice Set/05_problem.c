// Write your own version of strcpy function from <string.h>
#include <stdio.h>
int strLen(char a[]){
    int count = 0;
    while(a[count] != '\0'){
        count++;
    }
    return count;
}
int main() {
    char str[] = "Hello, World!";
    int length = StrLen(str);
    printf("%d\n", length);
    return 0;
}
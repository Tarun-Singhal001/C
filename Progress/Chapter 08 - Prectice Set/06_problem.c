// Write a program to encrypt a string by adding 1 to the ascii value of its characters.
#include <stdio.h>
void encript(char* str){
    int i = 0;
    while(str[i] != '\0'){
        str[i] += 1;
        i++;
    }
    printf("Encrypted string: %s\n", str);
}
int main() {
    char str[] = {"Hello"};
    encript(str);

    return 0;
}
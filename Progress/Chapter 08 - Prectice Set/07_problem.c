// Write a program to decrypt the string encrypted using encrypt function in problem 6
#include <stdio.h>
void encript(char* str){
    int i = 0;
    while(str[i] != '\0'){
        str[i] += 1;
        i++;
    }
    printf("Encrypted string: %s\n", str);
}
void decript(char* str){
    int i=0;
    while(str[i] != '\0'){
        str[i] -= 1;
        i++;
    }
    printf("Decrypted string: %s\n", str);
}
int main() {
    char str[] = "Hello world";
    encript(str);
    decript(str);
    printf("%s",str);
    return 0;
}
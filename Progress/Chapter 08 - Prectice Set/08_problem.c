// Write a program to count the occurrence of a given character in a string.
#include <stdio.h>
void search_string(char *str,char find){
    int i=0;
    int count = 0;
    while(str[i] != '\0'){
        if(str[i] == find){
            count++;
        }
        i++;
    }
    printf("The character '%c' appears %d times in the string.\n", find, count);
}
int main() {
    char str[] = "What are you doing bro";
    search_string(str,'o');
    return 0;
}
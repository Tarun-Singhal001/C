// Write a program with three functions
// 1. Good morning function which prints “good morning”.
// 2. Good afternoon function which prints “good afternoon”.
// 3. Good night function which prints “good night”.
// main() should call all of these in order 1→2→3

#include <stdio.h>
    void morning (void){
        printf("good morning\n");
    }
    void afternoon (void){
        printf("good afternoon\n");
    }
    void night (void){
        printf("good night\n");
    }
int main() {
    morning();
    afternoon();
    night();
    return 0;
}
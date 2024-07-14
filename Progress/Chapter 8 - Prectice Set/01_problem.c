// Which of the following is used to appropriately read a multi-word string.
// 1. gets()
// 2. puts()
// 3. printf()
// 4. scanf()

#include <stdio.h>
    
int main() {
    char str[20];
    
    // Read a multi-word string using gets()
    gets(str);
    
    printf("The entered string is: %s\n", str);
    
    return 0;
}
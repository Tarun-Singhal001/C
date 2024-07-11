// Write a programme to find greatest of four numbers entered by the user.
#include <stdio.h>
    
int main() {
    int a,b,c,d;
    
    printf("Enter four integers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)printf("A is greatest amongst all of them.\n");
    else if(b>a && b>c && b>d)printf("B is greatest amongst all of them.\n");
    else if(c>a && c>b && c>d)printf("C is greatest amongst all of them.\n");
    else printf("D is greatest amongst all of them\n");
    return 0;
}
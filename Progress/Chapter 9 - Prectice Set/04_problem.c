// Write a program to illustrate the use of arrow operator -> in C.
#include <stdio.h>
#include <string.h>

typedef struct emp{
    int salary;
    int id;
    char value[20];
} employee;
int main() {
    employee tarun;
    employee* emp1 = &tarun;
    emp1 ->salary = 2000;
    emp1 ->id = 101;
    // emp1 ->value = "a";  // direct copy of string is not allowed in c so we have to use strcpy function.

    strcpy(emp1->value,"Imp");

    printf("Salary is %drs and position %s ",tarun.salary,tarun.value);
    return 0;
}
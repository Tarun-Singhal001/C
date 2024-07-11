// Calculate income tax paid by an employee to the government as per the slabs mentioned below:
//      income slab      Tax
//      2.5-5.0L          5%
//      5.0L-10.0L       20%
//      Above 10.0L      30%
// Note that there is no tax below 2.5L. Take income amount as an input form the user.

#include <stdio.h>
    
int main() {
    float income,tax = 0;
    printf("Enter Your income amount: ");
    scanf("%f", &income);
    if(income >0 && income <250000){
        tax = 0;
    } 
    else if(income >250000 && income < 500000){
        tax += 0.05*(income - 250000);
    } 
    else if(income >500000 && income < 1000000){
        tax += 0.20*(income - 500000) + 0.05*(income - 250000);
    } 
    else if(income > 1000000) {
        tax += 0.3*(income - 1000000) + 0.2*(income - 250000) + 0.05*(income - 250000);
    }
    else{
        printf("Invalid income amount");
    } 
    printf("Total tax paid by you is %0.2f",tax);
    return 0;
}

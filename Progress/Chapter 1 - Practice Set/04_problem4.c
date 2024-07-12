// Write a program to calculate simple interest for a set of values representing principal, number of years, and rate of interest.
#include <stdio.h>
    
int main() {
    int principal = 1000, numberOfYears= 5, rateOfInterest = 5;
    int simpleInterest = principal*numberOfYears*rateOfInterest;
    printf("Simple Interest for Amount %d, Time %d and Rate %d is %drs\n",principal ,numberOfYears ,rateOfInterest ,simpleInterest/100);
    float k = 3 %2;
    printf("%f",k);
    return 0;
}
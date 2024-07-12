// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2

#include <stdio.h>
    void gravity(int mass){
        int force = 9.8 * mass;
        printf("The force of attraction on earth due to the mass of %d kg is %d Newtons.\n", mass, force);
    }
int main() {
    int mass = 50;
    gravity(mass);
    return 0;
}
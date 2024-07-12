// Create a three–dimensional array and print the address of its elements in increasing order.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x, y, z;
    printf("Enter the dimensions (x y z): ");
    scanf("%d %d %d", &x, &y, &z);

    int arr[x][y][z];

    // Seed the random number generator
    srand(time(NULL));

    // Initializing the array with random values
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                arr[i][j][k] = rand();
            }
        }
    }

    // Printing the addresses of the elements
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                printf("Address of arr[%d][%d][%d]: %d, Value: %d\n", i, j, k, &arr[i][j][k], arr[i][j][k]);
            }
        }
    }

    return 0;
}

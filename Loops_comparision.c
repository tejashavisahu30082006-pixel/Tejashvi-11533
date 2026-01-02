#include <stdio.h>

int main() {
    int n = 10;
    int i;
    int forCount = 0;
    int whileCount = 0;

    // FOR LOOP
    printf("Using FOR loop:\n");
    for (i = 1; i <= n; i++) {
        forCount++;
        printf("Iteration %d\n", forCount);
    }
    printf("Total Iterations: %d\n\n", forCount);

    // WHILE LOOP
    printf("Using WHILE loop:\n");
    i = 1;
    while (i <= n) {
        whileCount++;
        printf("Iteration %d\n", whileCount);
        i++;
    }
    printf("TotalIterations: %d\n", whileCount);

    return 0;
}

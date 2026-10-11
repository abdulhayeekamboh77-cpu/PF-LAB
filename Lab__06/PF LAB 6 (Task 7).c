#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    // upper half (middle row ke saath)
    for (i = 1; i <= n; i++) {

        // pehle spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // pehla star
        printf("*");

        // beech ke spaces aur doosra star (pehli row ke baad)
        if (i > 1) {
            for (j = 1; j <= 2 * i - 3; j++) {
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }

    // lower half
    for (i = n - 1; i >= 1; i--) {

        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        printf("*");

        if (i > 1) {
            for (j = 1; j <= 2 * i - 3; j++) {
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

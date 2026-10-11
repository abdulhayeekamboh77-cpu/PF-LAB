#include <stdio.h>

int main() {
    int i, status;
    int present = 0, absent = 0;

    for (i = 1; i <= 15; i++) {
        printf("Student %d (1 = present, 0 = absent): ", i);
        scanf("%d", &status);

        if (status == 1) {
            present++;
        }
    }

    absent = 15 - present;

    printf("\nTotal Present: %d\n", present);
    printf("Total Absent: %d\n", absent);

    return 0;
}

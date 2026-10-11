#include <stdio.h>

int main() {
    int arr[20];
    int n = 8;
    int i, largest, smallest;
    int search, found = 0;
    int pos, value;
    printf("Enter 8 elements:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nArray: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    largest = arr[0];
    smallest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);
    printf("\nEnter number to search: ");
    scanf("%d", &search);
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Number found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Number not found\n");
    }
    printf("\nEnter index to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter number to insert: ");
    scanf("%d", &value);

    if (pos >= 0 && pos <= n) {
        for (i = n; i > pos; i--) {
            arr[i] = arr[i - 1]; 
        }
        arr[pos] = value;
        n++;
    } else {
        printf("Invalid index\n");
    }
    printf("\nEnter index to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if (pos >= 0 && pos < n) {
        for (i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1]; 
        }
        n--;
    } else {
        printf("Invalid index\n");
    }
    printf("\nFinal Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

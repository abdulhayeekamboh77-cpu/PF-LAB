/*Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n, i, total = 0, minIdx = 0;
    printf("Enter number of book categories: ");
    scanf("%d", &n);
    int *stock = (int *)malloc(n * sizeof(int));
    if (stock == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++) 
    {
        printf("Enter stock for category %d: ", i);
        scanf("%d", &stock[i]);
    }
  
    for (i = 0; i < n; i++) 
    {
        total += stock[i];
        if (stock[i] < stock[minIdx]) 
        {
            minIdx = i;
        }
    }

    float avg = (float)total / n;
    printf("\nTotal Stock: %d\n", total);
    printf("Average Stock: %.2f\n", avg);
    printf("Lowest Stock Category Index: %d (Stock: %d)\n", minIdx, stock[minIdx]);

    int updateIdx, newVal;
    printf("\nEnter category index to update (0 to %d): ", n - 1);
    scanf("%d", &updateIdx);
    if (updateIdx >= 0 && updateIdx < n) 
    {
        printf("Enter new stock value: ");
        scanf("%d", &newVal);
        stock[updateIdx] = newVal;
        printf("Updated stock for category %d to %d.\n", updateIdx, stock[updateIdx]);
    } 
    else 
    {
        printf("Invalid category index!\n");
    }
    free(stock);
    stock = NULL;
    return 0;
}

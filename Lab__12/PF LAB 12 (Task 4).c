/*Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n, i;
    printf("Enter number of movie categories: ");
    scanf("%d", &n);

    int *ratings = (int *)malloc(n * sizeof(int));
    if (ratings == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++) 
    {
        printf("Enter rating count for category %d: ", i);
        scanf("%d", &ratings[i]);
    }

    int total = 0, maxIdx = 0;
    for (i = 0; i < n; i++) 
    {
        total += ratings[i];
        if (ratings[i] > ratings[maxIdx]) 
        {
            maxIdx = i;
        }
    }

    float avg = (float)total / n;
    printf("\nTotal Ratings: %d\n", total);
    printf("Average Ratings per Category: %.2f\n", avg);
    printf("Highest Rated Category Index: %d (Ratings: %d)\n", maxIdx, ratings[maxIdx]);

    int catIdx, newCount;
    printf("\nEnter category index to update (0 to %d): ", n - 1);
    scanf("%d", &catIdx);
    if (catIdx >= 0 && catIdx < n) 
    {
        printf("Enter new rating count: ");
        scanf("%d", &newCount);
        ratings[catIdx] = newCount;
        total = 0;
        maxIdx = 0;
        for (i = 0; i < n; i++) 
        {
            total += ratings[i];
            if (ratings[i] > ratings[maxIdx]) 
            {
                maxIdx = i;
            }
        }
        avg = (float)total / n;

        printf("\n--- Updated Statistics ---\n");
        printf("Total Ratings: %d\n", total);
        printf("Average Ratings per Category: %.2f\n", avg);
        printf("Highest Rated Category Index: %d (Ratings: %d)\n", maxIdx, ratings[maxIdx]);
    } 
    else 
    {
        printf("Invalid category index!\n");
    }

    free(ratings);
    ratings = NULL;
    return 0;
}

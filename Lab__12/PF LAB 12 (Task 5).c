/*Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getCategory(char ch) 
{
    unsigned char c = (unsigned char)ch;
    if (c >= 'A' && c <= 'Z') return 0;
    if (c >= 'a' && c <= 'z') return 1;
    if (c >= '0' && c <= '9') return 2;
    return 3;
}

void countCategories(const char *str, int counts[4]) 
{
    for (int i = 0; i < 4; i++) counts[i] = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        counts[getCategory(str[i])]++;
    }
}

float calcSimilarity(const char *pattern, const char *attempt) 
{
    int pCount[4], aCount[4];
    countCategories(pattern, pCount);
    countCategories(attempt, aCount);

    int totalPatternChars = (int)strlen(pattern);
    if (totalPatternChars == 0) return 0.0f;

    int matched = 0;
    for (int i = 0; i < 4; i++) 
    {
        if (aCount[i] < pCount[i]) 
        {
            matched += aCount[i];
        } 
        else 
        {
            matched += pCount[i];
        }
    }

    return ((float)matched / totalPatternChars) * 100.0f;
}

int main() 
{
    int n, i;
    printf("Enter number of participants: ");
    scanf("%d", &n);
    getchar();

    char **attempts = (char **)malloc(n * sizeof(char *));
    if (attempts == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    char buffer[200];
    printf("Enter password pattern: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';

    char *pattern = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
    if (pattern == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    strcpy(pattern, buffer);

    float *scores = (float *)malloc(n * sizeof(float));
    if (scores == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++) 
    {
        printf("Enter password attempt for participant %d: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';

        attempts[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
        if (attempts[i] == NULL) 
        {
            printf("Memory allocation failed!\n");
            return 1;
        }
        strcpy(attempts[i], buffer);

        scores[i] = calcSimilarity(pattern, attempts[i]);
    }

    int bestIdx = 0;
    printf("\n--- Similarity Results ---\n");
    for (i = 0; i < n; i++) {
        printf("Participant %d (%s): %.2f%%\n", i + 1, attempts[i], scores[i]);
        if (scores[i] > scores[bestIdx]) {
            bestIdx = i;
        }
    }

    printf("\nHighest Similarity: \"%s\" with %.2f%%\n", attempts[bestIdx], scores[bestIdx]);

    for (i = 0; i < n; i++) 
    {
        free(attempts[i]);
    }
    free(attempts);
    free(scores);
    free(pattern);
    attempts = NULL;
    scores = NULL;
    pattern = NULL;

    return 0;
}
```[cite: 1]

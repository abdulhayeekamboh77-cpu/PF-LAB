/*Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
    int n, i;
    printf("Enter number of feedback entries: ");
    scanf("%d", &n);
    getchar();

    char **feedback = (char **)malloc(n * sizeof(char *));
    if (feedback == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    char buffer[500];
    for (i = 0; i < n; i++) 
    {
        printf("Enter feedback %d: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';

        feedback[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
        if (feedback[i] == NULL) 
        {
            printf("Memory allocation failed!\n");
            return 1;
        }
        strcpy(feedback[i], buffer);
    }
  
    int extra;
    printf("How many more feedback entries do you want to add? ");
    scanf("%d", &extra);
    getchar();

    if (extra > 0) 
    {
        int newTotal = n + extra;
        char **temp = (char **)realloc(feedback, newTotal * sizeof(char *));
        if (temp == NULL) 
        {
            printf("Reallocation failed!\n");
            return 1;
        }
        feedback = temp;

        for (i = n; i < newTotal; i++) 
        {
            printf("Enter feedback %d: ", i + 1);
            fgets(buffer, sizeof(buffer), stdin);
            buffer[strcspn(buffer, "\n")] = '\0';

            feedback[i] = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
            strcpy(feedback[i], buffer);
        }
        n = newTotal;
    }

    int totalChars = 0;
    int longestIdx = 0;
    int maxLen = 0;

    printf("\n--- All Feedback Entries ---\n");
    for (i = 0; i < n; i++)
      {
        printf("%d. %s\n", i + 1, feedback[i]);

        int len = 0;
        char *ptr = feedback[i];
        while (*ptr != '\0') 
        {
            len++;
            ptr++;
        }

        totalChars += len;
        if (len > maxLen) 
        {
            maxLen = len;
            longestIdx = i;
        }
    }

    printf("\nTotal Characters: %d\n", totalChars);
    printf("Longest Feedback: \"%s\" (%d characters)\n", feedback[longestIdx], maxLen);

    for (i = 0; i < n; i++) 
    {
        free(feedback[i]);
    }
  
    free(feedback);
    feedback = NULL;
    return 0;
}

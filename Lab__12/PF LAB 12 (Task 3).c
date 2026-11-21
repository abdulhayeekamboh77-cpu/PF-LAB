/*Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int containsDigit(char *str) 
{
    while (*str != '\0') 
    {
        if (*str >= '0' && *str <= '9') 
        {
            return 1;
        }
        str++;
    }
    return 0;
}

int main() 
{
    int n, i;
    printf("Enter number of usernames: ");
    scanf("%d", &n);

    char **usernames = (char **)malloc(n * sizeof(char *));
    if (usernames == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    char temp[100];
    for (i = 0; i < n; i++) 
    {
        printf("Enter username %d: ", i + 1);
        scanf("%99s", temp);

        usernames[i] = (char *)malloc((strlen(temp) + 1) * sizeof(char));
        if (usernames[i] == NULL) 
        {
            printf("Memory allocation failed!\n");
            return 1;
        }
        strcpy(usernames[i], temp);
    }

    printf("\n--- Valid Usernames (Alphabetic Only) ---\n");
    for (i = 0; i < n; i++) 
    {
        if (!containsDigit(usernames[i])) 
        {
            printf("%s\n", usernames[i]);
        } else 
        {
            free(usernames[i]);
            usernames[i] = NULL;
        }
    }

    for (i = 0; i < n; i++) 
    {
        if (usernames[i] != NULL) 
        {
            free(usernames[i]);
            usernames[i] = NULL;
        }
    }
    free(usernames);
    usernames = NULL;

    return 0;
}

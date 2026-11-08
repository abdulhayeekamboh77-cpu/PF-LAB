/*Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
#include <string.h>
int main() 
{
    char review[500], updated[600];
    printf("Enter customer feedback: ");
    fgets(review, sizeof(review), stdin);
    review[strcspn(review, "\n")] = '\0';
    printf("Total characters: %zu\n", strlen(review));
  
    if (strstr(review, "good"))
        printf("Sentiment: Positive keyword \"good\" found.\n");
    if (strstr(review, "bad"))
        printf("Sentiment: Negative keyword \"bad\" found.\n");
    if (!strstr(review, "good") && !strstr(review, "bad"))
        printf("Sentiment: Neutral (no keyword found).\n");

    char *pos = strstr(review, "bad");
    if (pos != NULL) 
    {
        updated[0] = '\0';
        strncat(updated, review, pos - review);
        strcat(updated, "not good");
        strcat(updated, pos + 3);
        strcpy(review, updated);
        printf("Updated review: %s\n", review);
    }
    return 0;
}

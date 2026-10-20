/* Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
int main() 
{
    char sentences[3][100];
    int i, j, vowels;
    printf("Enter 3 sentences separated by semicolons (;):\n");
    for (i = 0; i < 3; i++) 
    {
        scanf(" %99[^;]%*c", sentences[i]);
    }
    for (i = 0; i < 3; i++) 
    {
        vowels = 0;
        for (j = 0; sentences[i][j] != '\0'; j++) 
        {
            char ch = sentences[i][j];
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' ||
                ch == 'O' || ch == 'U') {
                vowels++;
            }
        }
        printf("Sentence %d: %s\n", i + 1, sentences[i]);
        printf("Number of vowels: %d\n", vowels);
    }
    return 0;
}

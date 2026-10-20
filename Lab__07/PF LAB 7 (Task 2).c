/*Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
int main() 
{
    char logs[3][30];
    int i, j;
    int uppercase_count = 0;
    for (i = 0; i < 3; i++) 
	{
        printf("Enter CSV log entry %d (username,status,timestamp): ", i + 1);
        scanf(" %29[^,],%29[^,],%29[^\n]",
              logs[0], logs[1], logs[2]);
        for (j = 0; logs[0][j] != '\0'; j++) 
		{
            if (logs[0][j] >= 'A' && logs[0][j] <= 'Z')
                uppercase_count++;
        }
        for (j = 0; logs[1][j] != '\0'; j++) 
		{
            if (logs[1][j] >= 'A' && logs[1][j] <= 'Z')
                uppercase_count++;
        }
        for (j = 0; logs[2][j] != '\0'; j++) 
		{
            if (logs[2][j] >= 'A' && logs[2][j] <= 'Z')
                uppercase_count++;
        }
    }
    printf("\nTotal uppercase letters: %d\n", uppercase_count);
    return 0;
}

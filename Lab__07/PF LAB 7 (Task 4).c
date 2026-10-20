/*Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
int main() 
{
    char word_grid[3][100];
    char longest[100];
    int maxLen = 0, maxRow = -1, maxCol = -1;
    printf("Enter 3 lines, each with 3 space-separated words:\n");
    for (int i = 0; i < 3; i++) 
	{
        scanf(" %99[^\n]", word_grid[i]);
    }
    for (int i = 0; i < 3; i++) 
	{
        int k = 0;
        int j = 0;
        while (word_grid[i][k] != '\0') 
		{
            while (word_grid[i][k] == ' ')
                k++;
            if (word_grid[i][k] == '\0')
                break;
            int start = k;
            int len = 0;
            while (word_grid[i][k] != ' ' && word_grid[i][k] != '\0') 
			{
                len++;
                k++;
            }
            if (len > maxLen) 
			{
                maxLen = len;
                maxRow = i;
                maxCol = j;
                for (int m = 0; m < len; m++)
                    longest[m] = word_grid[i][start + m];
                longest[len] = '\0';
            }
            j++;
        }
    }
    printf("\nLongest word : %s\n", longest);
    printf("Length       : %d\n", maxLen);
    printf("Row Index (i): %d\n", maxRow);
    printf("Col Index (j): %d\n", maxCol);
    return 0;
}


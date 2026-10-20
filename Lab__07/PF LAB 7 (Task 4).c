/*Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
int main() 
{
    char word_grid[3][100];
    char word[100], longest[100];
    int i, j, k, len, max = 0;
    int row = 0, column = 0;
    for (i = 0; i < 3; i++) 
	{
        printf("Enter 3 words for row %d: ", i);
        scanf(" %[^\n]", word_grid[i]);
    }
    for (i = 0; i < 3; i++) 
	{
        j = 0;
        int col = 0;
        while (word_grid[i][j] != '\0') 
		{
            if (word_grid[i][j] == ' ') 
			{
                j++;
                continue;
            }
            k = 0;
            len = 0;
            while (word_grid[i][j] != ' ' &&
                   word_grid[i][j] != '\0') 
			{
                word[k] = word_grid[i][j];
                k++;
                len++;
                j++;
            }
            word[k] = '\0';
            if (len > max) 
			{
                max = len;
                row = i;
                column = col;
                for (k = 0; k <= len; k++) 
				{
                    longest[k] = word[k];
                }
            }
            col++;
        }
    }
    printf("\nLongest word: %s\n", longest);
    printf("Length: %d\n", max);
    printf("Row Index: %d\n", row);
    printf("Column Index: %d\n", column);
    return 0;
}

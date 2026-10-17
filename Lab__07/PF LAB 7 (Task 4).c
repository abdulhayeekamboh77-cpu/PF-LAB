/*Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
#include <string.h>
int main() {
    char word_grid[3][100];
    char word[100];
    char longest_word[100] = "";
    int i, j, k;
    int max_length = 0;
    int row_index = 0, col_index = 0;
    for (i = 0; i < 3; i++) 
	{
        printf("Enter 3 words for row %d: ", i);
        scanf(" %99[^\n]", word_grid[i]);
    }
    for (i = 0; i < 3; i++) 
	{
        j = 0;
        int column = 0;
        while (word_grid[i][j] != '\0')
		{
            if (word_grid[i][j] == ' ') 
			{
                j++;
                continue;
            }
            k = 0;
            while (word_grid[i][j] != '\0' &&
                   word_grid[i][j] != ' ') {
                word[k++] = word_grid[i][j++];
            }
            word[k] = '\0';
            if (k > max_length) 
			{
                max_length = k;
                strcpy(longest_word, word);
                row_index = i;
                col_index = column;
            }
            column++;
        }
    }
    printf("\n");
    printf("Longest word: %s\n", longest_word);
    printf("Word length: %d\n", max_length);
    printf("Row Index (i): %d\n", row_index);
    printf("Column Index (j): %d\n", col_index);
    return 0;
}

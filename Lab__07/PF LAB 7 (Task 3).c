#include <stdio.h>
int main() {
    char secret_messages[3][100];
    int i, j;
    int spaces, words;
    for (i = 0; i < 3; i++) 
	{
        printf("Enter secret message %d (uppercase letters only): ", i + 1);
        scanf(" %99[A-Z ]", secret_messages[i]);
    }
    for (i = 0; i < 3; i++) 
	{
        spaces = 0;
        words = 0;
		for (j = 0; secret_messages[i][j] != '\0'; j++) 
		{
            if (secret_messages[i][j] == ' ') 
			{
                spaces++;
            }
            if (secret_messages[i][j] != ' ' &&
                (j == 0 || secret_messages[i][j - 1] == ' ')) 
			{
                words++;
            }
        }
        printf("\nMessage %d: %s\n", i + 1, secret_messages[i]);
        printf("Total spaces: %d\n", spaces);
        printf("Total words: %d\n", words);
    }
    return 0;
}

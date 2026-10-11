#include <stdio.h>

int main() {
    char word[50], rev[50];
    int length = 0, i, j;
    int vowels = 0, consonants = 0;
    int isPalindrome = 1;
    char ch;

    printf("Enter a word: ");
    scanf("%s", word);
    printf("\nOriginal word: %s\n", word);

    while (word[length] != '\0') {
        length++;
    }
    printf("Length: %d\n", length);

    j = 0;
    for (i = length - 1; i >= 0; i--) {
        rev[j] = word[i];
        j++;
    }
    rev[j] = '\0';
    printf("Reversed word: %s\n", rev);

    for (i = 0; i < length; i++) {
        if (word[i] != rev[i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome == 1) {
        printf("The word is a palindrome\n");
    } else {
        printf("The word is not a palindrome\n");
    }

    for (i = 0; i < length; i++) {
        ch = word[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}

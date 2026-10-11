#include <stdio.h>
int main() {
    int num, original, digit, reverse = 0;

    printf("Enter the book code: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (original == reverse) {
        printf("Valid book code (Palindrome)\n");
    } else {
        printf("Invalid book code (Not a palindrome)\n");
    }

    return 0;
}

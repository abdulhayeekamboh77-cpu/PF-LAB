/*Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
int main() {
    int num, digit;
    int even = 0, odd = 0;

    printf("Enter the meter reading: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;

        if (digit % 2 == 0) {
            even++;
        } else {
            odd++;
        }

        num = num / 10;
    }

    printf("Even digits: %d\n", even);
    printf("Odd digits: %d\n", odd);

    return 0;
}

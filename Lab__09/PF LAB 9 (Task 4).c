/* Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/
#include <stdio.h>
int add(int a, int b) 
{
    return a + b;
}
int multiply(int a, int b) 
{
    return a * b;
}
int findMax(int a, int b) 
{
    return (a > b) ? a : b;
}
int compute(int a, int b, int (*func)(int, int))
{
    return func(a, b);
}
int main() 
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int sum = compute(num1, num2, add);
    int product = compute(num1, num2, multiply);
    int max = compute(num1, num2, findMax);
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Maximum: %d\n", max);
    return 0;
}

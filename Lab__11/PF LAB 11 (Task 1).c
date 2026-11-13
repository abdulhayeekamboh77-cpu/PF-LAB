/* Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/
#include <stdio.h>
int sumDigits(int n) 
{
    if (n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}
int calculateChecksum(int transactionID) 
{
    if (transactionID < 10)
        return transactionID;
    int sum = sumDigits(transactionID);
    return calculateChecksum(sum);
}
int main() 
{
    int id = 9875;
    printf("Transaction ID: %d\n", id);
    printf("Checksum (Digital Root): %d\n", calculateChecksum(id));
    return 0;
}

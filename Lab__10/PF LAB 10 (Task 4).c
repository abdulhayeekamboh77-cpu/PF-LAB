/*Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
#include <stdlib.h>
int main() 
{
    char name[50];
    int accNo;
    float amount;
    printf("Enter Customer Name: ");
    scanf(" %49[^\n]", name);
    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    printf("Enter Withdrawal Amount: ");
    scanf("%f", &amount);
    FILE *fptr = fopen("bank_log.txt", "a");
  
    if (fptr == NULL) 
    {
        printf("Error opening file!\n");
        exit(1);
    }

    fprintf(fptr, "Name: %s | Account No: %d | Withdrawal: %.2f\n", name, accNo, amount);
    fclose(fptr);
    printf("Transaction saved successfully.\n");
    return 0;
}

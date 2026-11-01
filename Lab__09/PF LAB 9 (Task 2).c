/* Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/
#include <stdio.h>
void withdraw(float *balance, float amount) 
{
    if (amount <= *balance) 
	{
        *balance -= amount;
        printf("Withdrawal successful.\n");
  } else 
	{
        printf("Transaction Declined: Insufficient Balance\n");
  }
}
void deposit(float *balance, float amount) 
{
    *balance += amount;
    printf("Deposit successful. Updated Balance: PKR %.2f\n", *balance);
}
int main()
{
    float balance = 999999; 
    char choice;
    float amount;
    printf("Initial Account Balance: PKR %.2f\n", balance);
    printf("Select transaction type (D = Debit/Withdraw, C = Credit/Deposit): ");
    scanf(" %c", &choice);
    printf("Enter amount: ");
    scanf("%f", &amount);
    if (choice == 'D' || choice == 'd') 
    {
        withdraw(&balance, amount);
    } 
    else if (choice == 'C' || choice == 'c') 
    {
        deposit(&balance, amount);
    } else 
    {
        printf("Invalid transaction type selected.\n");
    }
    printf("Final Account Balance: PKR %.2f\n", balance);
    return 0;
}

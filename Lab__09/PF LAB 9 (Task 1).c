/* Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/
#include <stdio.h>
float calculateDiscount(char membershipType, float amount) 
{
    float rate = 0.0;
    if (membershipType == 'P' || membershipType == 'p')  
	{
        rate = 0.20;
  } 
	else if (membershipType == 'G' || membershipType == 'g') 
	{
        rate = 0.10;
  } 
	else if (membershipType == 'S' || membershipType == 's') 
	{
        rate = 0.05;
  }
    if (amount > 10000.0) 
	{
        rate += 0.02;
  }
    return amount * rate;
}
float calculateFinalBill(float discountedAmount) 
{
    float tax = discountedAmount * 0.15;
    float shipping = 0.0;

    if (discountedAmount <= 5000.0) 
	{
        shipping = 300.0;
  }
    return discountedAmount + tax + shipping;
}
int main() 
{
    char membershipType;
    float amount, discountAmount, discountedAmount, finalAmount;
    printf("Enter membership type (P/G/S): ");
    scanf(" %c", &membershipType);
    printf("Enter total shopping amount (PKR): ");
    scanf("%f", &amount);
    discountAmount = calculateDiscount(membershipType, amount);
    discountedAmount = amount - discountAmount;
    finalAmount = calculateFinalBill(discountedAmount);
	  printf("\n");
    printf("Original Amount: PKR %.2f\n", amount);
    printf("Discount Amount: PKR %.2f\n", discountAmount);
    printf("Discounted Amount: PKR %.2f\n", discountedAmount);
    printf("Final Payable Amount: PKR %.2f\n", finalAmount);
    return 0;
}

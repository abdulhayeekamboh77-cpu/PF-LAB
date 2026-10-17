/*Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/

#include <stdio.h>
int main()
{
    char Name[10];
    
    printf("Enter Product Name: ");
    scanf("%9s", &Name);
    printf("\nProduct Name: %s", Name);
    
    int Quantity;
    
    printf("\nEnter Quantity: ");
    scanf("%d", &Quantity);
    printf("\nQuantity: %d", Quantity);
    
    float Price;
    printf("\nEnter Product Price: ");
    scanf("%f", Price);
    printf("\nPrice: %f", Price);
    
    return 0;
}

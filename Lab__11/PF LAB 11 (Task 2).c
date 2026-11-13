/* Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/
#include <stdio.h>
struct Product 
  { int id;
    char name[50];
    char category[50];
    float price;
    int stockQuantity; };
void displayProductDetails(struct Product p) 
{
    float discount = p.price * 0.05;
    float finalPrice = p.price - discount;
    printf("--- Product Details ---\n");
    printf("Product ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Category: %s\n", p.category);
    printf("Original Price: $%.2f\n", p.price);
    printf("Stock Quantity: %d\n", p.stockQuantity);
    printf("Final Price (after 5%% discount): $%.2f\n", finalPrice);
}
int main() 
{
    struct Product prod1 = {101, "Wireless Mouse", "Electronics", 25.00, 40};
    displayProductDetails(prod1);
    return 0;
}

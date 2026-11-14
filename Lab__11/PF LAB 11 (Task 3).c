/* Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/
#include <stdio.h>
#include <string.h>
struct Item 
{
    int ID;
    char Name[50];
    int Quantity;
    float UnitPrice;
};
int searchItem(struct Item items[], int size, int searchID) 
{
    for (int i = 0; i < size; i++) 
    {
        if (items[i].ID == searchID) 
        {
            return i;
        }
    }
    return -1;
}
int main() 
{
    int size = 5;
    struct Item items[5];
    float totalInventoryValue = 0.0;
  
    printf("----Warehouse Inventory Management System----\n\n");
  
    for (int i = 0; i < size; i++) 
    {
        printf("Enter details for Item %d:\n", i + 1);
        
        printf("  Enter Item ID: ");
        scanf("%d", &items[i].ID);
      
        while (getchar() != '\n');
        printf("  Enter Item Name: ");
        fgets(items[i].Name, sizeof(items[i].Name), stdin);
        items[i].Name[strcspn(items[i].Name, "\n")] = 0;
        printf("  Enter Quantity: ");
        scanf("%d", &items[i].Quantity);
        printf("  Enter Unit Price: ");
        scanf("%f", &items[i].UnitPrice);
        printf("\n");
    }
    for (int i = 0; i < size; i++) 
    {
        totalInventoryValue += (items[i].Quantity * items[i].UnitPrice);
    }
    
    printf("----------------------------------------\n");
    printf("Total Warehouse Inventory Value: $%.2f\n", totalInventoryValue);
    printf("----------------------------------------\n\n");
  
    int searchID;
    printf("Enter Item ID to search: ");
    scanf("%d", &searchID);
    int foundIndex = searchItem(items, size, searchID);
    
    if (foundIndex != -1) 
    {
        printf("\nItem Found Successfully:\n");
        printf("----------------------------------------\n");
        printf("ID        : %d\n", items[foundIndex].ID);
        printf("Name      : %s\n", items[foundIndex].Name);
        printf("Quantity  : %d\n", items[foundIndex].Quantity);
        printf("Unit Price: $%.2f\n", items[foundIndex].UnitPrice);
        printf("Total Val : $%.2f\n", items[foundIndex].Quantity * items[foundIndex].UnitPrice);
        printf("----------------------------------------\n");
    } else 
    {
        printf("\nError: Item with ID %d was not found in the inventory.\n", searchID);
    }
    return 0;
}

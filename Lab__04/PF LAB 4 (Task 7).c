#include <stdio.h>

int main() {
    float data, price, basicCost, discount, finalCost;

    printf("Enter data used in GB: ");
    scanf("%f", &data);

    printf("Enter price per GB: ");
    scanf("%f", &price);

    // Basic Cost
    basicCost = data * price;

    // Discount
    if (data < 50) {
        discount = 0;
    }
    else if (data < 100) {
        discount = basicCost * 0.05;
    }
    else if (data < 200) {
        discount = basicCost * 0.10;
    }
    else {
        discount = basicCost * 0.15;
    }

    // Final Cost
    finalCost = basicCost - discount;

    printf("\nBasic Cost = %.2f\n", basicCost);
    printf("Discount Amount = %.2f\n", discount);
    printf("Final Cost = %.2f\n", finalCost);

    return 0;
}
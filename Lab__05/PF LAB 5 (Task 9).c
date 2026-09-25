/* Porgramer: Abdul Hayee Kamboh
Section: BSAI-1A
Roll No#: 26k-0026
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int Operations, Base, Exponent, Number, Absolute_Value, Floor, Ceiling;
	double Square_Root_Number;
	printf("--AI Mathematical Operation--\n");
	printf("1. Square Root\n");
	printf("2. Power\n");
	printf("3. Absolute Value\n");
	printf("4. Floor\n");
	printf("5. Ceiling\n");
	printf("6. Invalid\n");
	printf("Enter the Operation that You Want to Perform: ");
	scanf("%d", &Operations);
	printf("\nThe Selected Operation Is: %d", Operations);
	switch (Operations)
	{
		case 1:
			printf("\nEnter Number For Performing Square Root Operation: ");
			scanf("%lf", &Square_Root_Number);
		if (Square_Root_Number >= 0)
		{
			 printf("The square root is %.2f\n", sqrt(Square_Root_Number));
			 break;
		}
		else 
		{
			printf("Invalid Number");
			break;
		}
		case 2:
			printf("\nEnter Base: ");
			scanf("%d", &Base);
			printf("\nEnter Exponent: ");
			scanf("%d", &Exponent);
			printf("\nThis Is the Power: %.2f", pow(Base, Exponent));
			break;
		case 3:
			printf("\nEnter A Number: ");
			scanf("%d", &Number);
			Absolute_Value = fabs(Number);
			printf("\nThe Absolute Value Is: %d\n", Number);
			break;
		case 4:
			printf("\nEnter A Number: ");
			scanf("%d", &Number);
			Floor = floor(Number);
			printf("\nThe Floor IS: %d\n", Number);
			break;
		case 5:
			printf("\nEnter A Number: ");
			scanf("%d", &Number);
			Ceiling = ceil(Number);
			printf("\nThe Ceiling IS: %d\n", Number);
			break;
		default:
			printf("\nInvalid Choice !");
	}
	return 0;
}

/* Porgramer: Abdul Hayee Kamboh
Section: BSAI-1A
Roll No#: 26k-0026
*/
#include <stdio.h>
int main()
{
	int Category, Subcategory;
	printf("Welcome To An Image Classification System\n");
	printf("1. Animal\n");
	printf("2. Vehicle\n");
	printf("3. Food\n");
	printf("4. Human\n");
	printf("Enter Category: ");
	scanf("%d", &Category);
	switch (Category)
	{	case 1:
		printf("Animal Category\n");
		printf("1. Cat\n");
		printf("2. Dog\n");
		printf("3. Bird\n");
		printf("Enter Animal Subcategory\n");
		scanf("%d", &Subcategory);
		switch (Subcategory)
		{
			case 1:
				printf("You Selected Cat From this Animal Category");
				break;
			case 2:
				printf("You Selected Dog From this Animal Category");
				break;
			case 3:
			    printf("You Selected Bird From this Animal Category");
				break;
			default:
				printf("\nInvalid Animal Subcategory");
				break;		
		}
		case 2:
		printf("Vehicle Category\n");	
		printf("1. Car\n");
		printf("2. Bus\n");
		printf("3. Bike\n");
		printf("Enter Vehicle Subcategory\n");
		scanf("%d", &Subcategory);
		switch (Subcategory)
		{
			case 1:
				printf("You Selected Car From this Vehicle Category");
				break;
			case 2:
				printf("You Selected Bus From this Vehicle Category");
				break;
			case 3:
				printf("You Selected Bike From this Vehicle Category");
				break;
			default:
				printf("\nInvalid Vehicle Category");
				break;
		}
		case 3:
		printf("Food Category\n");
		printf("1. Pizza\n");
		printf("2. Burger\n");
		printf("3. Biryani\n");
		printf("Enter Food Subcategory\n");
		scanf("%d", &Subcategory);
		switch (Subcategory)
		{
			case 1:
				printf("You Selected Pizza From this Category");
				break;
			case 2:
				printf("You Selected Burger From this Category");
				break;
			case 3:
				printf("You Selected Biryani From this Category");
				break;
			default:
				printf("\nInvalid Food Category");
				break;
		}
		case 4:
		printf("Human Category\n");
		printf("1. Male\n");
		printf("2. Female\n");
		printf("3. Child\n");
		printf("Enter Human Subcategory\n");
		scanf("%d", &Subcategory);
		switch(Subcategory)
		{
			case 1:
				printf("You Selected Male Form this Category");
				break;
			case 2:
				printf("You Selected Female Form this Category");
				break;
			case 3:
				printf("You Selected Child From this Category");
				break;
			default:
				printf("\nInvalid Human Category");
				break;	
		}	
	}
	return 0;
}

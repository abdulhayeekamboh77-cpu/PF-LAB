/* Porgramer: Abdul Hayee Kamboh
Section: BSAI-1A
Roll No#: 26k-0026
*/
#include <stdio.h>
int main()
{
	int Choice, Accuracy, Confidence_Score, Dataset_Size, User_Role, Model_Status, Model_Score, Role, Permission; 
	printf("--A Complete AI Decision Engine--\n");
	printf("1. Development (Y/N)\n");
	printf("2. Model Score\n");
	printf("3. User Role\n");
	printf("4. Model Status (1/0)\n");
	printf("5. Permission (Y/N)\n");
	printf("Enter Choice: ");
	scanf("%d", &Choice);
	printf("The Selected Choice Is: %d\n", Choice);
	switch (Choice)
	{
		case 1:
		printf("\nEnter Accuracy: ");
		scanf("%d", &Accuracy);
		printf("Enter Confidence: ");
		scanf("%d", &Confidence_Score);
		printf("Enter Dataset Size: ");
		scanf("%d", &Dataset_Size);
		printf("Enter Model Status: ");
		scanf("%d", &Model_Status);
			if (Accuracy >= 80 & Confidence_Score >= 75 & Dataset_Size >= 1000 & Model_Status == 1)
			{
				printf("User Have Deployment Permission");
			}
			else 
			{
				printf("User Have No Any Deployment Permission");
				break;
			}
		case 2:
		printf("\nEnter Accuracy: ");
		scanf("%d", &Accuracy);
		printf("Enter Confidence: ");
		scanf("%d", &Confidence_Score);
			(Model_Score = (Accuracy + Confidence_Score)/2);
		printf("Model_Score: %d", Model_Score);
		
		case 3:
			printf("Enter Role: ");
			scanf("%d", &Role);
		switch (Role)
		{
			case 1:
				printf("1 = Admin\n");
				break;
			case 2:
				printf("2 = Developer\n");
				break;
			case 3:
				printf("3 = Researcher\n");
				break;
		}
		case 4:
			printf("Enter Model Status: ");
			scanf("%d", &Model_Status);
		switch (Model_Status)
		{
			case 1:
				printf("1 = Ready\n");
				break;
			case 2:
				printf("2 = Testing\n");
				break;
			case 3:
				printf("3 = Training\n");
				break;
		}
		case 5:
			printf("Enter Permission: ");
			scanf("%d", &Permission);
		switch (Permission)
		{
			case 1:
				printf("1 = View\n");
				break;
			case 2:
				printf("2 = Train\n");
				break;
			case 3:
				printf("4 = Test\n");
				break;
			case 4:
				printf("8 = Deploy");
				break;
		}
	}
	return 0;	
	
}

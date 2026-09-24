/* Porgramer: Abdul Hayee Kamboh
Section: BSAI-1A
Roll No#: 26k-0026
*/
#include <stdio.h>
int main()
{
	int Problemtype, Algorithm;
	printf("AI Develpoer Appropriate Machine Learning\n");
	printf("1. Classification\n");
	printf("2. Regression\n");
	printf("3. Clustering\n");
	printf("4. Computer Vision\n");
	printf("Enter Your Choice: ");
	scanf("%d", &Problemtype);
	switch(Problemtype)
	{
		case 1:
		printf("--Classification--\n");
		printf("1. Logistic Regression\n");
		printf("2. Decision Tree\n");
		printf("3. KNN\n");
		printf("Enter Your Choice: ");
		scanf("%d", &Algorithm);
		switch(Algorithm)
		{
			case 1:
			printf("You Selected Logistic Regression\n");
			break;
			case 2:
			printf("You Selected Decision Tree\n");
			break;
			case 3:
			printf("You Selected KNN\n");
			break;
			default:
			printf("Invalid Choice");
			break;			
		}	
		case 2:
		printf("--Regression--\n");
		printf("1. Linear Regression\n");
		printf("2. Polynomial Regression\n");
		printf("3. SVR\n");
		printf("Enter Your Choice: ");
		scanf("%d", &Algorithm);
		switch(Algorithm)
		{
			case 1:
				printf("You Selected Linear Regression\n");
				break;
			case 2:
				printf("You Selected Polynomial Regression\n");
				break;
			case 3:
				printf("You Selected SVR\n");
				break;
			default:
				printf("Invalid Choice");
				break;
		}
		case 3:
		printf("--Clustering\n");
		printf("1. K-Means\n");
		printf("2. Hierarchical Clustering\n");
		printf("3. DBSCAN\n");
		printf("Enter Your Choice: ");
		scanf("%d", &Algorithm);
		switch(Algorithm)
		{
			case 1:
				printf("You Selected K-Means\n");
				break;
			case 2:
				printf("You Selected Hierarchical Clustering\n");
				break;
			case 3:
				printf("You Selected DBSCAN\n");
				break;
			default:
				printf("Invalid Choice");
				break;
		}
		case 4:
		printf("--Computer--\n");
		printf("1. CNN\n");
		printf("2. YOLO\n");
		printf("3. R-CNN\n");
		printf("Enter Your Choice: ");
		scanf("%d", &Algorithm);
		switch(Algorithm)
		{
			case 1:
				printf("You Selected CNN\n");
				break;
			case 2:
				printf("You Selected YOLO\n");
				break;
			case 3:
				printf("You Selected R-CNN\n");
				break;
			default:
				printf("Invalid Choice");
				break;
		}		
	}
	return 0;
}

/* Porgramer: Abdul Hayee Kamboh
Section: BSAI-1A
Roll No#: 26k-0026
*/
#include <stdio.h>
int main()
{
	int Confidence, Required_Confidence_Threshold;
	printf("--AI Generates A Prediction--\n");
	printf("Enter Confidence: ");
	scanf("%d", &Confidence);
	printf("Confidence Is: %d\n", Confidence);
	printf("Enter Required Confidence Threshold: ");
	scanf("%d", &Required_Confidence_Threshold);
	printf("The Required Confidence Is: %d\n", Required_Confidence_Threshold);
	if (Confidence > 90)
	{
		printf("Very High");
	}
	else if (Confidence >= 75)
	{
		printf("High");
	}
	else if (Confidence >= 50)
	{
		printf("Moderate");
	}
	else if (Confidence < 50)
	{
		printf("Low");
	}
	if (Confidence >= Required_Confidence_Threshold >= 50)
	{
		printf("Accepted");
	}
	return 0;
}





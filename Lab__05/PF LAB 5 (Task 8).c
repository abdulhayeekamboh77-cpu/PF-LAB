/* Porgramer: Abdul Hayee Kamboh
Section: BSAI-1A
Roll No#: 26k-0026
*/
#include <stdio.h>
int main()
{
	int Permission_Value;
	printf("--AI Platform Uses Bitwise Permission--\n");
	printf("1. Viewing (1)\n");
	printf("2. Training (2)\n");
	printf("3. Testing (4)\n");
	printf("4. Deploying Model (8)\n");
	printf("Enter Permission Value: ");
	scanf("%d", &Permission_Value);
	if (Permission_Value & 1)
	{
		printf("View Access Allow\n");
	}
	if (Permission_Value & 2)
	{
		printf("Train Access Allow\n");
	}
	if (Permission_Value & 4)
	{
		printf("Test Access Allow\n");
	}
	if (Permission_Value & 8)
	{
		printf("Deploy Permission Allow\n");
	}
	if ((Permission_Value & 2) && (Permission_Value & 8))
	{
		printf("Both Permission And Deployment Access");
	}
	else 
	{
		printf(" Both Permission And Development Have No Access");
	}
return 0;
}

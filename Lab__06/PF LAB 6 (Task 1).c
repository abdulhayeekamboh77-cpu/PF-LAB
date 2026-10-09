#include <stdio.h>
int main()
{
	int Pin, Sum=0;
	printf("Enter 4-Digit Pin: ");
	scanf("%d", &Pin);
	while (Pin > 0)
	{
		Sum = Sum + Pin % 10;
		Pin = Pin / 10;
	}
	printf("%d", Sum);
	if (Sum > 10)
	{
		printf("\nStrong Pin");
	}
	else
	{
		printf("\nWeak Pin");
	}
return 0;
}

#include <stdio.h>
int main()
{
	int n, Digit, Reverse;
	printf("Enter Ticket Number: ");
	scanf("%d", &n);
	printf("Ticket Number Is: %d", n);
	while (n > 0)
	{
		Digit = n % 10;
		Reverse = Reverse * 10 + Digit;
		n = n / 10;
	}
	printf("\nThe Reverse Of Ticket Number Is: %d", Reverse);
return 0;
}

#include <stdio.h>
int main(){
	int Confidence;
	char Usertype[20];
	printf("Enter Confidence: \n");
	scanf("%d", &Confidence);
	printf("Enter Usertype (Authorized/Unauthorized): \n");
	scanf("%s", &Usertype);
	if (Confidence >= 80 && Usertype[0] == 'A')
	{
		printf("Face Recognized\n");
		printf("Access Granted\n");
	}
	else if (Confidence >= 50 && Confidence)
	{
		printf("Manual Verification\n");
	}
	else if (Confidence < 50 || Usertype[0] == 'U')
	{
		printf("Face Not Recognized\n");
		printf("Access Denied\n");
	}
	else
	{
		printf("Acces Denied\n");
	}
	return 0;
}

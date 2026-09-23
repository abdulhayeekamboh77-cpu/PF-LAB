#include <stdio.h>
int main()
{
	int Category, Choice;
	printf("Simple AI Chatbot\n");
	printf("1. Greeting\n");
	printf("2. Study\n");
	printf("3. Weather\n");
	printf("4. Help\n");
	printf("Enter Category: ");
	scanf("%d", &Category);	
	switch(Category)
	{	case 1:
		printf("Greeting\n");
		printf("1. Hello\n");
		printf("2. How Are You\n");
		printf("3. Goodbye\n");
		printf("Enter Choice: ");
		scanf("%d", &Choice);
		switch(Choice)
		{
			case 1:
				printf("Hello, Are You Alive!\n");
				break;
			case 2:
				printf("How Is Life treating You!\n");
				break;
			case 3:
				printf("Catch You Later!\n");
				break;
			default:
				printf("Fahhhhhhhh....\n");
				break;
		}
		case 2:
		printf("Study\n");
		printf("1. Programming\n");
		printf("2. Mathematics\n");
		printf("3. AI\n");
		printf("Enter Choice: ");
		scanf("%d", &Choice);
		switch(Choice)
		{
			case 1:
				printf("Where One Missing Semicolon Can Ruin Your Whole Day!\n");
				break;
			case 2:
				printf("Question Dekha, Confidence Logout!\n");
				break;
			case 3:
				printf("AI Know Everything Except, What I am Thinking!\n");
				break;
			default:
				printf("Fuhhhhhhhh....\n");
				break;
		}
		case 3:
		printf("Weather\n");
		printf("1. Today\n");
		printf("2. Tomorrow\n");
		printf("3. Forecast\n");
		printf("Enter Choice: ");
		scanf("%d", &Choice);
		switch(Choice)
		{
			case 1:
				printf("Today Mode ON!\n");
				break;
			case 2:
				printf("Future Mode ON!\n");
				break;
			case 3:
				printf("Prediction Mode ON!\n");
				break;
			default:
				printf("Bruhhhhhhhh....\n");
				break;
		}
		case 4:
		printf("Help\n");
		printf("1. About Chatbot\n");
		printf("2. Commands\n");
		printf("3. Exit\n");
		printf("Enter Choice: ");
		scanf("%d", &Choice);
		switch(Choice)
		{
			case 1:
				printf("Certified Yapbot!\n");
				break;
			case 2:
				printf("Help Yourself First!\n");
				break;
			case 3:
				printf("Peace Outtt!\n");
				break;
			default:
				printf("Bruhhhhhhhh....\n");
				break;	
		}
	}
	return 0;
}

#include "stdio.h"

int main()
{
	int userInput;

	printf("Enter exam mark: ");
	scanf_s("%d", &userInput);

	if (userInput >= 0 && userInput < 40)
	{
		printf("Grade: Failed");
	}

	else if (userInput >= 40 && userInput < 50)
	{
		printf("Grade: 3rd");
	}

	else if (userInput >= 50 && userInput < 60)
	{
		printf("Grade: 2:2");
	}

	else if (userInput >= 60 && userInput < 70)
	{
		printf("Grade: 2:1");
	}

	else if (userInput >= 70 && userInput <= 100)
	{
		printf("1st");
	}

	else
	{
		printf("invalid mark entered");
	}

	return 0;
}
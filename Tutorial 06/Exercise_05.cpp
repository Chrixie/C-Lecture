#include "stdio.h"

int main()
{
	enum enum_Month { JULY, DECEMBER };

	//enum_Month month;
	int userInput;

	printf("What month is it?\n");
	printf("1. July\n");
	printf("2. December\n");
	printf("Enter Number: ");
	scanf_s("%d", &userInput);


	//if (userInput == 1)
	//	month = JULY;

	//else if (userInput == 2)
	//	month = DECEMBER;

	//else
	//{
	//	printf("Invalid choice, try again next time");
	//	return 0;
	//}

	enum_Month month = static_cast<enum_Month>(userInput - 1);

	if (userInput < 1 || userInput > 2)
	{
		printf("\n\nInvalid choice, try again next time\n\n");
		return 0;
	}

	switch (month)
	{
	case(JULY):
	{
		printf("Welcome to Egypt! Is there a sandstorm outside?\n");
		printf("1. Yes\n");
		printf("2. No\n");
		scanf_s("%d", &userInput);

		if (userInput == 1)
		{
			printf("Enjoy staying at the hotel and the swim!\n");
		}

		else if (userInput == 2)
		{
			printf("Don't fall of the camel on your way to the pyramids!\n");
		}

		else
		{
			printf("Unknown command, return later");
			return 0;
		}
		break;
	}

	case(DECEMBER):
	{
		printf("Welcome to The Alps! Is there a snows outside?\n");
		printf("1. Yes\n");
		printf("2. No\n");
		scanf_s("%d", &userInput);
		if (userInput == 1)
		{
			printf("Best of luck with the skeeing!\n");
		}

		else if (userInput == 2)
		{
			printf("I've heared they have great fundue around here\n");
		}

		else
		{
			printf("Unknown command, return later");
			return 0;
		}
		break;
	}

	};

	return 0;
}

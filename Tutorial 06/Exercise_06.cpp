#include "stdio.h"

int main()
{
	int num1;
	int num2;

	printf("Enter first number: ");
	scanf_s("%d", &num1);

	printf("Enter second number: ");
	scanf_s("%d", &num2);

	if (num1 >= 10 && num1 <= 20)
	{
		printf("number1 is between 10 and 20 inclusive.\n");
	}

	if (num1 == 1234 || num2 == 1234)
	{
		printf("number1 or number2 is equal to 1234.\n");
	}

	if (num1 > 0 && (num2 >= 12 && num2 <= 32))
	{
		printf("number1 is greater than 0 and number2 is between 12 and 32.\n");
	}

	if (num1 > num2 || num1 < 0)
	{
		printf("number1 is greater than number2 or number1 negative.\n");
	}

	//maybe redo
	if (!(num1 > 9 && num1 < 21))
	{
		printf("number1 is NOT between 10 and 20 inclusive. Do this 2 different ways.\n");
	}

	if (!(num1 >= 10 && num1 <= 20))
	{
		printf("number1 is NOT between 10 and 20 inclusive. Do this 2 different ways.\n");
	}
	//--------------------------------//

	if ((num1 == 6 || num1 == 9) && (num2 == 2 || num2 == 3))
	{
		printf("number1 is equal to 6 or 9, and number2 is equal to 2 or 3.\n");
	}

	if (((num1 == 6 || num1 == 9) && (num2 == 2 || num2 == 3)) || num1 > num2)
	{
		printf("number1 is equal to 6 or 9, and number2 is equal to 2 or 3) or number1 is greater than number2\n");
	}

	return 0;
}
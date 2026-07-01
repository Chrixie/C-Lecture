#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;

	int evenNums = 0;
	int unevenNums = 0;

	printf("Give me an int: ");
	scanf_s("%d", &num1);
	printf("Give me another one: ");
	scanf_s("%d", &num2);
	printf("Give me another one: ");
	scanf_s("%d", &num3);
	printf("Give me another one: ");
	scanf_s("%d", &num4);
	printf("Give me another one: ");
	scanf_s("%d", &num5);

	if (num1 % 2 == 0)
	{
		printf("%d is even\n", num1);
		evenNums++;
	}
	else
	{
		printf("%d is uneven\n", num1);
		unevenNums++;
	}

	if (num2 % 2 == 0)
	{
		printf("%d is even\n", num2);
		evenNums++;
	}
	else
	{
		printf("%d is uneven\n", num2);
		unevenNums++;
	}

	if (num3 % 2 == 0)
	{
		printf("%d is even\n", num3);
		evenNums++;
	}

	else
	{
		printf("%d is uneven\n", num3);
		unevenNums++;
	}

	if (num4 % 2 == 0)
	{
		printf("%d is even\n", num4);
		evenNums++;
	}
	else
	{
		printf("%d is uneven\n", num4);
		unevenNums++;
	}

	if (num5 % 2 == 0)
	{
		printf("%d is even\n", num5);
		evenNums++;
	}
	else
	{
		printf("%d is uneven\n", num5);
		unevenNums++;
	}

	printf("\nThere are %d even numbers\n", evenNums);
	printf("There are %d uneven numbers\n", unevenNums);

	return 0;
}
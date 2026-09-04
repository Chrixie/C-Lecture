#include <stdio.h>

int main()
{
	const int amountOfNumbers = 10;

	int programNumbers[amountOfNumbers] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};



	for (int i = 0; i < amountOfNumbers; i++)
	{
		printf("%d ", programNumbers[i]);
	}

	printf("\nNEW\n");

	for (int i = amountOfNumbers -1; i >= 0; i--)
	{
		printf("%d ", programNumbers[i]);
	}


	printf("\nNEW\n");

	for (int i = 0; i < amountOfNumbers - 1; i++)
	{
		printf("%d ", programNumbers[i]);
		i++;
	}

	printf("\nNEW\n");

	for (int i = amountOfNumbers - 1; i >= 0; i--)
	{
		printf("%d ", programNumbers[i]);
		i--;
		i--;
	}

	return 0;
}

/*Design and implement a program that stores the numbers 2, 4, 6, 8, 10, 12, 14, 16, 18 and 20 in an array. 
Use a loop to print out the list of numbers, a second loop to print out the numbers backwards, a third loop to print out every other number and a forth to print out every third number backwards.*/
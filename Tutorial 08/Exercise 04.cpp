#include <stdio.h>

int main()
{
	int userInput;
	int indexMatch;
	const int amountOfNumbers = 10;

	int arrayOfNumbers[amountOfNumbers] = { 2, 3, 5, 10, 7, 1, 9, 8, 4, 6 };

	printf("give me a number 1-10: ");
	scanf_s("%d", &userInput);

	for (int i = 0; i < amountOfNumbers; i++)
	{
		printf("%d, ", arrayOfNumbers[i]);

		if (userInput == arrayOfNumbers[i])
			indexMatch = i;

	}

	printf("\nNumber was found on index: %d", indexMatch);

	return 0;

}
//Design and implement a program that stores an array of all of the numbers 1 to 10, no duplicates, in a random order(the order can be determined either manually or programmatically).
//The user should enter a number between 1 and 10, and the code should examine every element of the array until it finds the input number. 
//It should then output the entire list, followed by text indicating which index the number was found at.

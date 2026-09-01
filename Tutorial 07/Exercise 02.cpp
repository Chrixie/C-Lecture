#include <stdio.h>

int main()
{
	int userInput;
	int countingNumber = 0;

	printf("Give me a positive number \n");

	scanf_s("%d", &userInput);

	while(countingNumber <= userInput)
	{
		printf("%d \n", countingNumber);
		countingNumber++;
	}

	if (countingNumber = userInput)
		countingNumber = 0;

	do
	{
		printf("%d \n", countingNumber);
		countingNumber++;
	} while (countingNumber <= userInput);


	if (countingNumber = userInput)
		countingNumber = 0;

	for(countingNumber; countingNumber <= userInput; countingNumber++)
	{
		printf("%d \n", countingNumber);
	}

	return 0;
}




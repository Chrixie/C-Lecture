#include <stdio.h>


int GiveMeNumber();


int main()
{


	printf("%d", (GiveMeNumber() + GiveMeNumber()));

	return 0;
}

int GiveMeNumber()
{
	int userInput;

	printf("Input number: ");
	scanf_s("%d", &userInput);

	return userInput;
}
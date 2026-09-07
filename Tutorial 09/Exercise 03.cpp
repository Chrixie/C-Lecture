#include <stdio.h>



void GiveMeInt(int param);

int main()
{
	int userInput;

	GiveMeInt(5);

	printf("How many stars do you want to display? ");
	scanf_s("%d", &userInput);

	GiveMeInt(userInput);
	

	return 0;
}

void GiveMeInt(int param)
{

	for (int i = 0; i < param; i++)
	{
		printf("*");
	}
	printf("\n");
}
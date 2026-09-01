#include <stdio.h>

int main()
{
	char userChar;
	int x;
	int y;


	printf("Give me a character: ");
	scanf_s("%c", &userChar);
	printf("How many colums of the letter do you want? ");
	scanf_s("%d", &x);
	printf("How many rows of the letter do you want? ");
	scanf_s("%d", &y);

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%c", userChar);
		}

		printf("\n");
	}


	return 0;
}
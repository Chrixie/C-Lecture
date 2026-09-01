#include <stdio.h>
#include <stdlib.h>

int main()
{
	int userInput;

	bool Done = false;

	printf("Give me a number between 1-10: ");
	scanf_s("%d", &userInput);

	while (Done == false)
	{
		if (userInput < 0 || userInput > 10)
		{

			system("cls");

			printf("Stop it and listen!\n");
			printf("Give me a number between 1-10: ");
			scanf_s("%d", &userInput);

		}
		else
		{
			for (int i = 1; i <= 10; i++)
			{
				if (i == 10)
					Done = true;

				if (i != userInput)
				{
					printf("%d \n", i);

				}


			}

		}

	}


	return 0;
}
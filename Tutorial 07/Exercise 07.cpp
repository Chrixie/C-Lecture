#include <stdio.h>

int main()
{
	int userInput;
	bool Done = false;


	printf("Give me a number between 1-10: ");
	scanf_s("%d", &userInput);

	do
	{

		if (userInput < 1 || userInput > 10)
		{
			printf("Stop trying to be slick\n");
			printf("Give me a number between 1-10: ");
			scanf_s("%d", &userInput);
		}
		else
		{
			for (int i = 1; i <= userInput; i++)
			{
				printf("%d\n", i);


				if (i == userInput)
					Done = true;
			}
		}

	} while (!Done);

	return 0;
}
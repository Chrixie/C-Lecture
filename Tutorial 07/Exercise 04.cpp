#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
	srand(time(NULL));
	int userInput = 0;
	int randomNumber = (rand() % 20);

	while (true)
	{
		//printf("%d", randomNumber);
		printf("Guess a number between 0-20!\n");
		scanf_s("%d", &userInput);

		if (userInput != randomNumber)
			printf("Try guessing again\n");

		if (userInput == randomNumber) {
			printf("You guessed right!\n");
			break;
		}
	}





	return 0;
}
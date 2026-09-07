#include <stdio.h>


void Quiz();

bool TrueOrFalse();

int main()
{

	Quiz();


}


bool TrueOrFalse()
{
	char userInput;

	scanf_s("%c", &userInput, 1);

	if (userInput == 'y' || userInput == 'Y')
	{
		return true;
	}
	else if (userInput == 'n' || userInput == 'N')
	{
		return false;
	}
	else
		TrueOrFalse();
}

void Quiz()
{
	int score = 0;

	printf("Does 1+1 = 2? \ny/n : ");
	if (TrueOrFalse() == true)
		score++;



	printf("Is Sweden a country? \ny/n : ");
	if (TrueOrFalse() == true)
		score++;


	printf("Can panthers fly? \ny/n : ");
	if (TrueOrFalse() == false)
		score++;


	printf("Do you want to gain a point? \ny/n : ");
	if (TrueOrFalse() == true)
		score++;


	printf("\n\nGood job! Your score is: %d", score);
}
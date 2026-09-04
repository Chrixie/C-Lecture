#include <stdio.h>
#include <cstdlib>
#include <ctime>

int main()
{
	int userInput;

	const int daysInAYear = 365;

	float degreePerDay[daysInAYear];

	srand(time(NULL));

	for (int i = 0; i < daysInAYear; i++)
	{
		float randWholeNum = rand() % 70 - 20;
		float randDecimal = (rand() % 100) / 10.0f;

		float randNum = randWholeNum + randDecimal;

		degreePerDay[i] = randNum;
		printf("%.2f, ", degreePerDay[i]);
	}

	printf("\n Input a day 0-364: ");

	scanf_s("%d", &userInput);

	printf("\n %.2f", degreePerDay[userInput]);

	return 0;
}


/*Create a program that declares an array to hold the highest temperature (to the nearest tenth of a degree) for each day of a year.
Assign a random value between -20.0 and 50.0 to each day. Print out the entire list, separated by commas.
Allow the user to enter a number for a given day and output the temperature for that day.
*/
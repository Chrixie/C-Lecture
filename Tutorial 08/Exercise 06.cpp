#include <stdio.h>
#include <ctime>
#include <stdlib.h>

int main()
{
	int userInputRow;
	int userInputCollumn;
	int multresult;
	int result;

	const int rowsAmount = 12;
	const int collumsAmount = 12;

	int spreadSheet[rowsAmount][collumsAmount];


	srand(time(NULL));

	printf("What row would you like to check? ");
	scanf_s("%d", &userInputRow);

	printf("And what collumn would you like to check? ");
	scanf_s("%d", &userInputCollumn);

	for (int i = 0; i < rowsAmount; i++)
	{
		for (int j = 0; j < collumsAmount; j++)
		{
			spreadSheet[i][j] = rand() % 100;

			//printf("%d, ", rows[i]);
			printf("%d, ", spreadSheet[i][j]);
		}
		printf("\n");
	}

	result = spreadSheet[userInputRow][userInputCollumn];

	for (int i = 0; i < 1; i++)
	{
		multresult = spreadSheet[userInputRow][i] * spreadSheet[i][userInputCollumn];
	}



	printf("row %d, collumn %d = %d \n", userInputRow, userInputCollumn, result);
	printf("row and collumn multipied = %d ", multresult);

	return 0;
}

/*Design and implement a program that:
Creates a two dimensional array that is 12 rows by 12 columns.
Fills the array elements with the results of a times tables, starting at 1 and finishing at 12 for both rows and columns
Allow the user to enter 2 numbers, and return the value from the correct array element. Compare this with the 2 numbers actually multiplied together to see if the result is correct.
If not, take  a look at how you are indexing into the array, paying close attention to what the design is asking and how it relates to indices.
*/
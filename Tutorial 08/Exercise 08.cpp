#include <stdio.h>
#include <cstdlib>
#include <ctime>



int main()
{
	int userInput = 0;

	const int rowAmount = 10;
	const int collumnAmount = 5;

	int highestMark = 0;
	int lowestMark = 0;
	int highestAverage = 0;
	int lowestAverage = 0;

	int checkHighestMark = 0;
	int checkLowestMark = 0;

	int studentInformation[rowAmount][collumnAmount];

	srand(time(NULL));

	//Settings value to Students and calculating averages
	for (int i = 0; i < rowAmount; i++)
	{
		int averageMarkStudent = 0;


		int checkHighestAverage = 0;
		int checkLowestAverage = 0;

		for (int j = 0; j < collumnAmount; j++)
		{

			if (j == 0)
				studentInformation[i][j] = i;

			else if (j == collumnAmount - 1)
			{
				averageMarkStudent /= collumnAmount;

				studentInformation[i][j] = averageMarkStudent;
			}

			else
			{
				int randMark = rand() % 100;
				studentInformation[i][j] = randMark;

				averageMarkStudent += randMark;
			}

			if (studentInformation[i][j] > highestMark)
				highestMark = studentInformation[i][j];


			if (studentInformation[i][j] < lowestMark)
				lowestMark = studentInformation[i][j];

			if (studentInformation[i][j] > checkHighestAverage)
				checkHighestAverage = studentInformation[i][j];

			if (studentInformation[i][j] < checkLowestAverage)
				checkLowestAverage = studentInformation[i][j];

		}

		highestAverage += checkHighestAverage;
		lowestAverage += checkLowestAverage;
	}


	enum MyEnum
	{
		STUDENT_ID,
		ALL_SCORES,
		HIGHEST_MARK,
		LOWEST_MARK,
		HIGHEST_AVERAGE_MARK,
		LOWEST_AVERAGE_MARK,
		EXIT
	};

	while (true)
	{
		printf("\n|Options|\n");
		printf("1. Check Student result\n");
		printf("2. Look at all Scores\n");
		printf("3. Highest Mark\n");
		printf("4. Lowest mark\n");
		printf("5. Highest average\n");
		printf("6. Lowest average\n");
		printf("7. Exit\n");
		printf("Pick a number: ");

		if (scanf_s("%d", &userInput) != 1)
		{
			while (getchar() != '\n');

			printf("Enter a number between 1 and 7.\n");

			system("cls");
		}

		userInput += -1;


		switch (userInput)
		{
		case STUDENT_ID:
			printf("\n");
			printf("Enter Student ID: ");
			scanf_s("%d", &userInput);
			printf("\n");
			if (userInput > 0 && userInput < 10)
			{
				for (int i = 0; i < rowAmount; i++)
				{
					for (int j = 0; j < collumnAmount; j++)
					{
						if (i == userInput)
						{
							if (j == collumnAmount - 1)
								printf("Average mark: %d \n", studentInformation[i][j]);
							else if (j == 0)
								printf("Student ID: %d, ", i);
							else
								printf("Mark %d: %d, ", j, studentInformation[i][j]);
						}

					}
				}
			}
			else
				break;

			break;

		case ALL_SCORES:
			for (int i = 0; i < rowAmount; i++)
			{
				for (int j = 0; j < collumnAmount; j++)
				{
					if (i == userInput)
					{
						if (j == collumnAmount - 1)
							printf("Average mark: %d \n", studentInformation[i][j]);
						else if (j == 0)
							printf("Student ID: %d, ", i);

						else
							printf("Mark %d: %d, ", j, studentInformation[i][j]);
					}
				}
			}
			break;

		case HIGHEST_MARK:

			printf("Highest Mark: %d  ", highestMark);
			break;

		case LOWEST_MARK:

			printf("Lowest Mark: %d ", lowestMark);

			break;

		case HIGHEST_AVERAGE_MARK:

			printf("Highest average Mark: %d ", highestAverage);


			break;

		case LOWEST_AVERAGE_MARK:

			printf("Lowest average Mark: %d ", lowestAverage);

			break;

		case EXIT:

			return 0;
		}
	}
}



/*Design and implement a program that:
Creates a two dimensional array of 10 rows, each row consisting of a student id number, three marks, and an average mark.
For each student enter an ID and 3 marks.
Once all students IDs and marks are entered, calculate the average and add it to the array.
Allow the user to
enter an ID number and see the results for that student,
look at the entire set of IDs and scores,
ask for the highest mark,
ask for the lowest mark,
ask for the highest average,
ask for the lowest average.
*/
#include <stdio.h>

int main()
{
	int userInput;

	const int numberOfStudents = 20;

	int studentMarks[numberOfStudents];

	float averageScore = 0;
	float highestScore = 0;
	float lowestScore = 0;

	for (int i = 0; i < numberOfStudents; i++)
	{
		//studentMarks[i] = i+1;

		printf("Input grade for student %d: ", i+1);
		scanf_s("%d", &userInput);

		studentMarks[i] = userInput;


		averageScore += studentMarks[i];

		if (highestScore < studentMarks[i])
			highestScore = studentMarks[i];

		if (lowestScore > studentMarks[i])
			lowestScore = studentMarks[i];

	}

	for (int i = 0; i < numberOfStudents; i++)
	{

		printf("Student %d Score: %d\n", i+1, studentMarks[i]);

	}

	averageScore /= numberOfStudents;
	printf("\n Average score: %.2f", averageScore);
	printf("\n Highest score: %.2f", highestScore);
	printf("\n Lowest score: %.2f", lowestScore);



	return 0;
}

/*Implement the student marks program that inputs and displays 20 student marks. 
Add code that loops through the array in order to calculate the average student score, as well as recording the highest and lowest. 
Finally output these three values.
*/
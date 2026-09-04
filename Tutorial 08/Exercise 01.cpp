#include <stdio.h>

int main()
{
	float floatingNumbers[10] = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
	int userInput;

	printf("give me a number between 0 and 9: ");
	scanf_s("%d", &userInput);

	printf("Selected number: %f", floatingNumbers[userInput]);


	return 0;
}

/*Create a program that creates a floating point array of ten elements, which is initialised to ten different values of your choice. 
Ask the user for a number between 0 and 9, and display the floating point number at that index of the array. */
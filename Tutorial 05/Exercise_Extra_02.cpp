#include <stdio.h>

int main()
{
	int input;

	// \x9C = pound
	printf("How many \x9C did you spend?");
	scanf_s("%d", &input);

	if (input >= 1000 && input < 3000)
		input *= 0.9;

	if (input >= 3000 && input < 10000)
		input *= 0.8;

	if (input >= 10000)
		input *= 0.7;

	printf("%d", input);

	return 0;
}
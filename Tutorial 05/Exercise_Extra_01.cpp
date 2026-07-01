#include <stdio.h>

int main()
{
	int input;


	printf("Input a number: ");
	scanf_s("%d", &input);

	if (input < 0)
		printf("\nNumber is negative");
	if (input > 0)
		printf("\nNumber is positive");
	if (input == 0)
		printf("\nNumber is zero");


	return 0;
}
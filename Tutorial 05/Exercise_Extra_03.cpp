#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int sum;
	int input;

	printf("Input an int: ");
	scanf_s("%d", &num1);
	printf("Input another int: ");
	scanf_s("%d", &num2);

	printf("What would you like to do? Input corrosponding number\n"
		"1. Add the numbers\n"
		"2. Subtract numbers\n"
		"3. Divide numbers\n"
		"4. Multiply numbers\n"
		"Enter Number: ");
	scanf_s("%d", &input);

	if (input == 1)
		sum = num1 + num2;

	if (input == 2)
		sum = num1 - num2;

	if (input == 3)
		sum = num1 / num2;

	if (input == 4)
		sum = num1 * num2;

	printf("Result: %d", sum);

	return 0;
}
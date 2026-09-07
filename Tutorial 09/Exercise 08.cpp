#include <stdio.h>

float TakesInt(int anInt);

int main()
{
	int userInput;

	printf("Give me a radius and I will give give you back the area of a circle: ");

	scanf_s("%d", &userInput);

	printf("Area: %f", TakesInt(userInput));

	return 0;
}

float TakesInt(int anInt)
{
	float circle;

	circle = ((anInt*anInt) * 3.14);

	return circle;
}

// Write a function that takes a single integer and returns a floating point value that is the area of the circle of the given passed integer is a radius.Test as usual.
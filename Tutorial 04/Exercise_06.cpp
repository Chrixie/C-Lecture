#include <iostream>

int main()
{
	int int1;
	int int2;

	float float1;

	float sum;

	printf("Give me an int\n");
	scanf_s("%d", &int1);

	printf("Give me an int\n");
	scanf_s("%d", &int2);

	printf("Give me a float\n");
	scanf_s("%f", &float1);

	//multiplication has a higher priority, BUT if you use parentheses (), that takes precident over multiplication, so addition between the 2 numbers comes before multiplying.
	sum = (int1 + int2) * float1;
	printf("(int1 + int2) * float1 = %f", sum);

	return 0;
}
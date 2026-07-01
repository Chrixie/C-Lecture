#include <stdio.h>

int test_number = 100;

int main()
{
	int test_number = 200;

	//Takes the "closest" variable in reach
	printf("%d", test_number);

	//goes into global space because no namespace is mentioned to get global variable
	printf("%d", ::test_number);

	return 0;
}
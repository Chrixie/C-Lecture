#include <stdio.h>

void increase(int& anInt);

int main()
{
	int x = 0;
	printf("Give me a number and I'll double it. ");

	scanf_s("%d", &x);
	increase(x);
	printf("Result: %d", x);


	return 0;
}

void increase(int& anInt)
{
	anInt += anInt;
}

/*Create a function called increase() that takes a single integer parameter, and has void return type. The function should increment the input parameter by a fixed amount you choose. 
Declare the function in such a way so that when the function is called using a variable argument then the variable is updated by the function and test it, e.g.*/
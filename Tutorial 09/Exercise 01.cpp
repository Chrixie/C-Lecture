#include <stdio.h>
#include <string>

void StringFunction(std::string stringInput);

int main()
{
	StringFunction("Cornelis\n");

	StringFunction("Believe\n");
	StringFunction("3rd times the charm\n");

	for (int i = 0; i < 3; i++)
	{
		StringFunction("This is my loop\n");
	}




	return 0;
}


void StringFunction(std::string stringInput)
{
	printf("%s", stringInput.c_str());
}
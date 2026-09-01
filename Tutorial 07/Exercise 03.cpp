#include <stdio.h>

int main()
{
	int userInputOne;
	int userInputTwo;

	printf("input a number");
	scanf_s("%d", &userInputOne);
	printf("input another number");
	scanf_s("%d", &userInputTwo);


	if(userInputOne < userInputTwo)
	{
		for(userInputOne = userInputOne +1; userInputOne < userInputTwo; userInputOne++)
		{
			printf("%d", userInputOne);
		}
	}

	if(userInputTwo < userInputOne)
	{
		for (userInputTwo = userInputTwo +1; userInputTwo < userInputOne; userInputTwo++)
		{
			printf("%d", userInputTwo);
		}
	}


	return 0;
}
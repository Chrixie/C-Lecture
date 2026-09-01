#include <stdio.h>

int main() 
{
	int decreasingNumber;

	printf("Give me a positive number: \n");

	scanf_s("%d", &decreasingNumber);

	//while(decreasingNumber > 0)
	//{
	//	printf("Decreasing number! %d\n", decreasingNumber);

	//	decreasingNumber--;
	//}

	//if(decreasingNumber == 0)
	//{
	//	printf("FIRE!");
	//}

	//do
	//{
	//	printf("Decreasing number! %d\n", decreasingNumber);
	//	decreasingNumber--;

	//	if (decreasingNumber == 0)
	//	{
	//		printf("FIRE!");
	//	}
	//} while (decreasingNumber > 0);


	for(decreasingNumber; decreasingNumber > 0; decreasingNumber--)
	{
		printf("Decreasing number! %d\n", decreasingNumber);

		if (decreasingNumber == 1)
		{
			printf("FIRE!");
		}
	}



	return 0;
}
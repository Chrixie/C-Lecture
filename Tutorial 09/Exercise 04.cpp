#include <stdio.h>

void RectangleBuilder(int row, int column);

int main()
{
	int row = 0;
	int column = 0;

	printf("How many rows do you want your rectangle to be? ");
	scanf_s("%d", &row);

	printf("How many columns do you want your rectangle to be? ");
	scanf_s("%d", &column);

	RectangleBuilder(row, column);




	return 0;
}

void RectangleBuilder(int row, int column)
{


	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{

			if (i == 0  || i == row-1)
				printf("*");

			else if (j == 0 || j == column-1)
				printf("*");

			else
				printf(" ");

		}
		printf("\n");
	}


}
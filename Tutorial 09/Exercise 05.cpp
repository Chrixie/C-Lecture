#include <stdio.h>

void RectangleBuilder(int row, int column, char icon);

int main()
{
	int row = 0;
	int column = 0;
	char icon = 0;


	printf("How many rows do you want your rectangle to be? ");
	scanf_s("%d", &row);

	printf("How many columns do you want your rectangle to be? ");
	scanf_s("%d", &column);

	printf("What symbol do you want to build your rectangle with? ");
	scanf_s(" %c", &icon, 1);


	RectangleBuilder(row, column, icon);


	return 0;
}

void RectangleBuilder(int row, int column, char icon)
{


	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{

			if (i == 0 || i == row - 1)
				printf("%c", icon);

			else if (j == 0 || j == column - 1)
				printf("%c", icon);

			else
				printf(" ");

		}
		printf("\n");
	}


}
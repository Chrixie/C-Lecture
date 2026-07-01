#include <iostream>

int main()
{
	int highscore = 500;

	int p1Score;
	int p2Score;

	printf("Input Player 1 Score:");
	scanf_s("%d", &p1Score);

	printf("\n Input Player 2 Score: ");
	scanf_s("%d", &p2Score);

	if (p1Score > p2Score)
	{
		printf("Player 1 has the highest score: %d!", p1Score);

		if (p1Score > highscore)
		{
			highscore = p1Score;
			printf("Player 1 set a new highscore!");
		}
	}

	if (p2Score > p1Score)
	{
		printf("Player 2 has the highest score: %d!", p2Score);

		if (p2Score > highscore)
		{
			highscore = p2Score;
			printf("Player 2 set a new highscore!");
		}
	}


	return 0;
}
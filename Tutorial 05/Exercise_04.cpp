#include <stdio.h>

int main()
{
	int i = 16;
	int j = 32;
	int k = 8;
	bool r;

	//r = (i == 16);
	//r = (k != 16);
	//r = (k < 10);
	//r = (j > 33);
	//r = (j == (k * 2));
	//r = (j == (i * 2));
	//r = ((k + i) <= (j – i));
	//r = ((i / k) == 2);
	//r = (((i + j + k) / k) >= 7);

	if (r = (i == 16))
		printf("r = (i == 16) is true\n");
	else
		printf("r = (i == 16) is false\n");

	if (r = (k != 16))
		printf("r = (k != 16) is true\n");
	else
		printf("r = (k != 16) is false\n");

	if (r = (k < 10))
		printf("r = (k < 10) is true\n");
	else
		printf("r = (k < 10) is false\n");

	if (r = (j > 33))
		printf("r = (j > 33) is true\n");
	else
		printf("r = (j > 33) is false\n");

	if (r = (j == (k * 2)))
		printf("r = (j == (k * 2)) is true\n");
	else
		printf("r = (j == (k * 2)) is false\n");

	if (r = (j == (i * 2)))
		printf("r = (j == (i * 2)) is true\n");
	else
		printf("r = (j == (i * 2)) is false\n");

	if (r = ((k + i) <= (j - i)))
		printf("r = ((k + i) <= (j – i)) is true\n");
	else
		printf("r = ((k + i) <= (j - i)) is false\n");

	if (r = ((i / k) == 2))
		printf("r = ((i / k) == 2) is true\n");
	else
		printf("r = ((i / k) == 2) is true\n");

	if (r = (((i + j + k) / k) >= 7))
		printf("r = (((i + j + k) / k) >= 7) is true\n");
	else
		printf("r = (((i + j + k) / k) >= 7) is true\n");



	return 0;
}
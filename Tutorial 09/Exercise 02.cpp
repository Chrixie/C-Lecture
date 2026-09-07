#include <stdio.h>

void Launch(int param);

int main()
{
	Launch(5);


	return 0;
}

void Launch(int param)
{
	for (int i = param; i >= 0; i--)
	{
		if (i > 0)
			printf("%d\n", i);

		else
			printf("LIFTOFF!");
	}
	
}
#include <stdio.h>
#include <string>

int main()
{
	std::string DaysInWeed[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };


	for (int i = 0; i < DaysInWeed->capacity(); i++)
	{
		printf("%s ", DaysInWeed[i].c_str());
	}


	return 0;
}
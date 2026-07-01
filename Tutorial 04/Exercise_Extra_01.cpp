#include <stdio.h>

int main()
{
	int birthDay = 0;
	int birthMonth;
	int birthYear;

	int currentDay;
	int currentMonth;
	int currentYear;

	int year;
	int days = 0;

	int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("What year where you born??\n");
	scanf_s("%d", &birthDay);


	printf("What month? 1-12\n");
	scanf_s("%d", &birthMonth);

	printf("What day? 1-31 \n");
	scanf_s("%d", &birthDay);


	printf("What year is it now?\n");
	scanf_s("%d", &currentYear);


	printf("What month? 1-12\n");
	scanf_s("%d", &currentMonth);

	printf("What day? 1-31 \n");
	scanf_s("%d", &currentDay);

	year = currentYear - birthDay;
	if (currentMonth <= birthMonth)
	{
		if (currentDay < birthDay)
		{
			year--;
		}
	}
	printf("You are %d years old.\n", year);

	for (int i = 0; birthDay < currentYear; i++)
	{
		if (birthDay % 4 == 0 && birthDay % 100 != 0 || birthDay % 100 == 0)
		{
			days += 366;
			birthDay++;
		}
		else
		{
			days += 365;
			birthDay++;
		}
	}

	for (int i = 0; i < birthMonth; i++)
	{
		int daysInMonths = 0;

		daysInMonths += months[i];

		if (i == birthMonth)
		{
			if (birthDay % 4 == 0 && birthDay % 100 != 0 || birthDay % 100 == 0)
			{
				days += daysInMonths - 366;
			}
			else
			{
				days += daysInMonths - 365;
			}
		}
	}
	days += (currentDay - birthDay);
	printf("You are %d days old.\n", days);

	return 0;
}
#include <stdio.h>

int main()
{
	int inputBirthYear;
	int inputBirthMonth;
	int inputBirthDay = 0;

	int currentYear;
	int currentMonth = 0;
	int currentDay;

	int myAge = 0;
	int myAgeDays = 0;

	int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("What year were you born?\n");
	scanf_s("%d", &inputBirthYear);

	printf("What month were you born?\n");
	scanf_s("%d", &inputBirthMonth);

	printf("What day of the month were you born?\n");
	scanf_s("%d", &inputBirthDay);

	printf("What is the current year?\n");
	scanf_s("%d", &currentYear);
	printf("What month is it? 1/12\n");
	scanf_s("%d", &currentMonth);

	printf("What day of the month is it? 1-31\n");
	scanf_s("%d", &currentDay);

	myAge = currentYear - inputBirthYear;

	if (currentMonth <= inputBirthMonth)
	{
		if (currentDay < inputBirthDay)
		{
			myAge--;
		}
	}

	//Adjusting to 0-11 months for months[]
	currentMonth--;
	inputBirthMonth--;

	int countingMonth = inputBirthMonth;



	bool doOnce = true;


	//Step 1(first year)
	for (countingMonth; countingMonth <= 11; countingMonth++)
	{

		//if (currentDay < intputBirthDay || currentDay > intputBirthDay)
		if (doOnce)
		{
			if (countingMonth == 1 && (inputBirthYear % 4 == 0 && inputBirthYear % 100 != 0) || inputBirthYear % 100 == 0)
			{
				myAgeDays += 29 - inputBirthDay;
			}

			else
			{
				myAgeDays += months[countingMonth] - inputBirthDay;
			}
			doOnce = false;
		}

		else if ((inputBirthYear % 4 == 0 && inputBirthYear % 100 != 0) || inputBirthYear % 100 == 0)
		{
			if (countingMonth == 1)
				myAgeDays += 29;
		}

		else if (countingMonth == currentMonth && myAge <= 0)
		{
			myAgeDays += months[countingMonth] - (months[countingMonth] - currentDay);
			break;
		}

		else
		{
			myAgeDays += months[countingMonth];
		}
	}


	int countingYear;

	//step 2 (years inbetween)
	for (countingYear = inputBirthYear + 1; countingYear < currentYear; countingYear++)
	{
		for (countingMonth = 0; countingMonth <= 11; countingMonth++)
		{
			if (((countingYear % 4 == 0 && countingYear % 100 != 0) || countingYear % 4 == 0 && countingYear % 400 == 0) && countingMonth == 1)
			{
				myAgeDays += 29;
			}

			else
			{
				myAgeDays += months[countingMonth];
			}
		}
	}

	//step 3 (last year)
	for (int i = 0; i <= currentMonth; i++)
	{
		if (i < currentMonth)
		{
			if (((countingYear % 4 == 0 && countingYear % 100 != 0) || countingYear % 100 == 0) && countingMonth == 1)
			{
				myAgeDays += 29;
			}

			else
				myAgeDays += months[i];
		}

		else
			myAgeDays += currentDay;
	}



	//if (currentMonth <= birthMonth)
	//{
	//	int daysInMonths = 0;
	//	for (int i = 0; i <= birthMonth; i++)
	//	{
	//		daysInMonths += months[i];
	//		if (i == birthMonth)
	//		{
	//			if (birthDay % 4 == 0 && birthDay % 100 != 0 || birthDay % 100 == 0)
	//			{
	//				myAgeDays += daysInMonths - 366;
	//			}
	//			else
	//			{
	//				myAgeDays += daysInMonths - 365;
	//			}
	//		}
	//	}
	//}


	//myAgeDays += (currentDay - intputBirthDay);
	printf("You are %d days old.\n", myAgeDays);
	printf("You are %d years old.\n", myAge);

	if (myAge < 18)
		printf("You're too young for the pub!");

	else if (myAge > 18)
		printf("You're old enough!");

	else
		printf("Year 18 is a good year!");


	return 0;
}
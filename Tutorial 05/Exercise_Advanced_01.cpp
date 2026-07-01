#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	int question_Sleep;
	int question_Marathon;
	int question_Swimming;

	printf("Do you enjoy sleeping?\n"
		"1. Yes\n"
		"2. No\n");
	printf("Answer: ");
	scanf_s("%d", &question_Sleep);

	printf("Would you run a marathon?\n"
		"1. Yes\n"
		"2. No\n");
	printf("Answer: ");
	scanf_s("%d", &question_Marathon);

	printf("Do you like swimming?\n"
		"1. Yes\n"
		"2. No\n");
	printf("Answer: ");
	scanf_s("%d", &question_Swimming);

	if (question_Sleep == 1)
		printf("Sleeping sure is nice!\n");
	else
		printf("You might not like sleeeping, but it sure it important!\n");

	if (question_Marathon == 1)
		printf("I bet you have good stamina if you'd run a marathon!\n");
	else
		printf("Me neither, it's way too much running\n");

	if (question_Swimming)
		printf("It's such a good feeling when you float in the water\n");
	else
		printf("I don't like getting wet either!\n");

	return 0;
}
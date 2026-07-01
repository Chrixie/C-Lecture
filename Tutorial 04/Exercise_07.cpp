#include <stdio.h>

int main()
{
	const int num1 = 1;
	const float num2 = 2.0f;

	enum enum_weapons { AXE, SWORD, HAMMER, STAFF };

	enum_weapons weapon_Axe = AXE;
	enum_weapons weapon_Sword = SWORD;
	enum_weapons weapon_Hammer = HAMMER;
	enum_weapons weapon_Staff = STAFF;

	printf("%d\n", num1);
	printf("%f\n", num2);

	enum_weapons weapon = STAFF;

	if (weapon == 0)
	{
		printf("AXE\n");
	}

	printf("%d\n", weapon_Axe);
	printf("%d\n", weapon_Sword);
	printf("%d\n", weapon_Hammer);
	printf("%d\n", weapon_Staff);

	return 0;
}
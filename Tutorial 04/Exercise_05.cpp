#include <iostream>

int main()
{


	int i1;
	float f1;

	//GETTING INITIAL VALUES
	printf("Give me an int\n");
	scanf_s("%d", &i1);

	printf("Give me an float\n");
	scanf_s("%f", &f1);

	//COMPOUND ASSIGNMENT
	printf("\n####COMPOUND ASSIGNMENT####\n");

	//Opperation happens before being called
	printf("\Outside Function\n");
	i1 += 5;
	printf("%d \n", i1);

	f1 += 5.2;
	printf("%f \n", f1);

	//Does not increase the value of the int, just displays the value added on
	printf("\n Inside Function\n");
	printf("%d \n", i1 + 5);
	printf("%f \n", (f1 + 5.2f));


	//PREFIX INCREMENT
	printf("\n####PREFIX INCREMENT####\n");

	//does the opperation before it's called
	printf("\Outside Function\n");
	++i1;
	printf("%d\n", i1);
	++f1;
	printf("%f\n", f1);

	//Prints the increased value. Value is increased before being read.
	printf("\n Inside Function\n");
	printf("%d\n", ++i1);
	printf("%f\n", ++f1);

	//POSTFIX INCREMENT
	printf("\n####POSTFIX INCREMENT####\n");

	//opperation happens before print so it increases.
	printf("\Outside Function\n");
	i1++;
	printf("%d\n", i1);

	f1++;
	printf("%f\n", f1);

	//Increment is done after reading the value. It reads the value, then increases it.
	printf("\n Inside Function\n");
	printf("%d\n", i1++);
	printf("%f\n", f1++);

	return 0;
}
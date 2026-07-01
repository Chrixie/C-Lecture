#include <iostream>

int main()
{
	float radius;

	float circumference;
	float area;

	const float pi = 3.14159265359f;


	printf("What is the radius of the circle? \n");
	scanf_s("%f", &radius);

	area = pi * (radius * radius);
	printf("Area of cirle is: %f \n", area);
	printf("Area of cirle is: %e \n", area);
	printf("Area of cirle is: %E \n", area);

	circumference = (2 * pi) * radius;
	printf("Circonfurance of circle is: %f \n", circumference);
	printf("Circonfurance of circle is: %e \n", circumference);
	printf("Circonfurance of circle is: %E \n", circumference);

	return 0;
}
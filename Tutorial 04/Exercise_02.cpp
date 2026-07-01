#include <iostream>

int main()
{
	float num1;
	float num2;
	float num3;
	float sum;

	scanf_s("%f", &num1);
	scanf_s("%f", &num2);
	scanf_s("%f", &num3);

	sum = num1 + num2 + num3;

	printf("%f", num1) + printf(" + %f", num2) + printf(" + %f", num3) + printf(" = %f \n", sum);

	//printf("%f", num1, "+", "%f", num2, "+", "%f", num3, "=", "%f", sum); DOESN'T WORK

	sum / 3;
	printf("Average number: %f \n", sum);
	//printf("%f", num1);
	//printf(" + %f", num2);
	//printf(" + %f", num3);
	//printf(" = %f", sum);

	//printf("%f", num1);
	//printf(" + ");
	//printf("%f", num2);
	//printf(" + ");
	//printf("%f", num3);
	//printf(" = ");
	//printf("%f \n", sum);


	return 0;
}
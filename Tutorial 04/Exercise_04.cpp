#include <iostream>

int main()
{
	int num1;
	int num2;

	int sumi;

	float num3;
	float num4;

	float sumf;

	printf("Give me an int \n");
	scanf_s("%d", &num1);

	printf("Give me another one! \n");
	scanf_s("%d", &num2);

	sumi = num1 + num2;
	printf("int1 + int2 = %d \n", sumi);
	sumi = num1 - num2;
	printf("int1 - int2 = %d \n", sumi);

	//dividing with a large second number will bring it close to 0 will show as 0 because you can't have decimals with ints.
	sumi = num1 / num2;
	printf("int1 / int2 = %d \n", sumi);
	sumi = num1 * num2;
	printf("int1 * int2 = %d \n", sumi);




	printf("Now give me a float \n");
	scanf_s("%f", &num3);

	printf("And another float! \n");
	scanf_s("%f", &num4);

	sumf = num3 + num4;
	printf("float1 + float2 = %f \n", sumf);
	sumf = num3 - num4;
	printf("float1 - float2 = %f \n", sumf);
	sumf = num3 / num4;
	printf("float1 / float2 = %f \n", sumf);
	sumf = num3 * num4;
	printf("float1 * float2 = %f \n", sumf);


	printf("\n%d\n", num1);
	printf("%d\n", num2);
	printf("%f\n", num3);
	printf("%f\n\n", num4);

	//turning floats into ints will REMOVE the decimal. That's why it doesn't round up/down.
	//It's for multiple of reasons: 
	sumi = num1 + num4;
	printf("int1 + float2 = (int) %d \n", sumi);
	sumi = num1 - num4;
	printf("int1 - float2 = (int) %d \n", sumi);
	sumi = num1 / num4;
	printf("int1 / float2 = (int) %d \n", sumi);
	sumi = num1 * num4;
	printf("int1 * float2 = (int) %d \n", sumi);


	//turning int and float into a float, works as expected. It ends up being decimals where it should be.
	sumf = num1 + num4;
	printf("int1 + float2 = (float) %f \n", sumf);
	sumf = num1 - num4;
	printf("int1 - float2 = (float) %f \n", sumf);
	sumf = num1 / num4;
	printf("int1 / float2 = (float) %f \n", sumf);
	sumf = num1 * num4;
	printf("int1 * float2 = (float) %f \n", sumf);

	return 0;

}
int main()
{
	int num1 = 0;
	int num2 = 1;

	int result;

	for (int i = 0; i < 11; i++)
	{
		result = (num1 + num2);

		num2 = num1;
		num1 = result;

	}

	return 0;
}
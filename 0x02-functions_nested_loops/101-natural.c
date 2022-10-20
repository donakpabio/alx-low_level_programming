#include <stdio.h>

/**
 * naturual_num - check the code.
 *
 * Return: Always Nothing
 */
void naturual_num()
{

	int s3 = 0;
	int s5 = 0;
	int a = 3;

	while (a < 1024)
	{
		s3 = s3 + a;
		a = a + 3;
	}

	a = 5;

	while (a < 1024)
	{
		if (a % 3 != 0)
		{
			s5 = s5 + a;
		}
		a = a + 5;
	}

	printf("The answer is: %d\n", (s3 + s5));
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	naturual_num();
	return (0);
}

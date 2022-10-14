#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: This is a longer description.
 * Don't forget that a line should not exceed 80 characters.
 * But you're totally free to use several lines to properly
 * describe your function
 * Return: Just returning zero
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d", n);
	l = n % 10;
	printf(" is %d", l);

	if (l > 5)
	{
		printf(" and is greater than 5\n");
	} else if (l == 0)
	{
		printf(" and is 0\n");
	} else if (l < 6)
	{
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}

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
	l = n % 10;
	printf("Last digit of %d", n);

	if (l > 0)
	{
		printf(" is positive\n");
	} else if (l == 0)
	{
		printf(" is zero\n");
	} else
	{
		printf(" is negative\n");
	}

	return (0);
}

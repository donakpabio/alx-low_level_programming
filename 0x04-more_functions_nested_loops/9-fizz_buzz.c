#include <stdio.h>

/**
 * print_digit - writes the character c to stdout
 * @d: The character to print
 *
 * Return: Nothing
 */
void print_digit(int d)
{
	int r = d % 10;

	if ((d - r) == 0)
	{
		putchar(r + '0');
	} else
	{
		print_digit((d - r) / 10);
		putchar(r + '0');
	}
}

/**
 * fizz_buzz - check the code.
 * Return: Nothing
 */
void fizz_buzz(void)
{
	int r = 1;

	while (r <= 100)
	{
		if ((r % 3 == 0) && (r % 5 == 0))
		{
			printf("FizzBuzz");
		} else if (r % 3 == 0)
		{
			printf("Fizz");
		} else if (r % 5 == 0)
		{
			printf("Buzz");
		} else
		{
			print_digit(r);
		}
		putchar(' ');
		r++;
	}
	putchar('\n');
}

/**
 * main - check the code.
 *
 * Return: 0
 */
int main(void)
{
	fizz_buzz();
	return (0);
}

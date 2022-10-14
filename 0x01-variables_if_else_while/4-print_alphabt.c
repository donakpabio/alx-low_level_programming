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
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (!(a == 'q' || a == 'e'))
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}

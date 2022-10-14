#include <stdio.h>

/**
 * main: Method doing everything
 * This method is used to do everything int he main method.
 * Return: Exit properly
 */
int main(void)
{
	char a;
	for (a='z'; a>='a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main: Method doing everything
 * This method is used to do everything int he main method.
 * Return: Exit properly
 */
int main(void)
{
	int a;
	for (a=1; a<=9; a++)
	{
		putchar(a+'0');
		if(a != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

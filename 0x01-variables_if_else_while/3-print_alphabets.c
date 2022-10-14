#include <stdio.h>

/**
 * main: Method doing everything
 * This method is used to do everything int he main method.
 * Return: Exit properly
 */
int main(void)
{
	char a;
	for (a='a'; a<='z'; a++)
	{
		putchar(a);
	}

	for (a='A'; a<='Z'; a++)
        {
                putchar(a);
        }
	putchar('\n');
	return (0);
}

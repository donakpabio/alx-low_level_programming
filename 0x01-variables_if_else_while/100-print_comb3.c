#include <stdio.h>

/**
 * main: Method doing everything
 * This method is used to do everything int he main method.
 * Return: Exit properly
 */
int main(void)
{
	char a;
	for (a='0'; a<='9'; a++)
	{
		for (a='a'; a<='f'; a++)
        	{
                	putchar(a);
        	}
	}
	putchar('\n');
	return (0);
}

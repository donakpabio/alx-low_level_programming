#include "main.h"

/**
 * more_numbers - check the code.
 * 
 * Return: Nothing
 */
void more_numbers(void)
{
	int t = 0;

	while (t < 10)
	{
		int i = 0;

		while (i <= 14)
		{
			_putchar(i + '0');
			i++;
		}	
		_putchar('\n');
		t++;
	}
}

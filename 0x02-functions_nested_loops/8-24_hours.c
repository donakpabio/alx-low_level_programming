#include <stdio.h>
#include "main.h"


/**
 * jack_bauer - check the code.
 *
 * Return: result
 */
int jack_bauer(void)
{
	int h = 0;

	while (h < 24)
	{
		int m = 0;

		while(m < 60)
		{
			if (h < 10)
			{
				_putchar('0');
			}
			_putchar(h + '0');
			_putchar(':');
			if (m < 10)
			{
				_putchar('0');
			}
			_putchar(m + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
	return (0);
}

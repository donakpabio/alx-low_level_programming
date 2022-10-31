#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Print chess board
 * @a: input
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(*(a + i)[j] + '0');
			j++;
		}
		i++;
	}
}

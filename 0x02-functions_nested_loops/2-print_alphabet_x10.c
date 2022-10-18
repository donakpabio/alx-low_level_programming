#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always Nothing
 *
void print_alphabet_x10()
{
	for (int a=0; a<10; a++)
	{
		char a;

		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}*/

/**
 * _putchar - check the code.
 *
 * Return: Always Nothing
 */
void _putchar(int c)
{
	putchar(c);
}

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
	print_alphabet_x10();
	return (0);
}

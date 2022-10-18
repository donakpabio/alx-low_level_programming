#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - check the code.
 *
 * Return: Always Nothing.
 */
void print_alphabet()
{
        char a;

        for (a = 'a'; a <= 'z'; a++)
        {
                _putchar(a);
        }
        _putchar('\n');
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

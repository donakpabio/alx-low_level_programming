#include "function_pointers.h"

/**
 * print_name - Do something
 * @name: input
 * @f: input
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	print(name);
	print(f(name));
}

/**
 * print - Do something
 * @name: input
 * Return: Nothing
 */
void print(char *name)
{
	unsigned int i;

	i = 0;
	while (name[i])
	{
		putchar(name[i]);
		i++;
	}
}

#include "function_pointers.h"

/**
 * print_name - Do something
 * @name: input
 * @f: input
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

#include "function_pointers.h"

/**
 * array_iterator - Do something
 * @array: input
 * @size: input
 * @action: input
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while (i < size)
	{
		(*action)(*(array + i));
		i++;
	}
}

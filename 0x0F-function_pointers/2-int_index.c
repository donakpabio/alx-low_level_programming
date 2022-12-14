#include "function_pointers.h"

/**
 * int_index - Do something
 * @array: input
 * @size: input
 * @cmp: input
 * Result: result
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		if ((*cmp)(*(array + i)))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

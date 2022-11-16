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
	int i;
	size_t j;

	i = 0;
	j = 0;
	while (i < array)
	{
		while(j < size)
		{
			printf("%d\n", (*action)[i](j));
			j++;
		}
		i++;
	}
}

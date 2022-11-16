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
	if(size <= 0)
	{
		return (-1);
	}	
}

#include "main.h"

/**
 * _realloc - Do something
 * @ptr: input
 * @old_size: input
 * @new_size: input
 * Return: result
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (realloc(ptr, new_size));
}

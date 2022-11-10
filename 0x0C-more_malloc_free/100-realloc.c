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
	return (realloc(ptr, old_size, new_size));
}

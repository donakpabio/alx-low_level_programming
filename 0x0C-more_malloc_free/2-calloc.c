#include "main.h"

/**
 * _calloc - Do something
 * @nmemb: input
 * @size: input
 * Return: result
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	return (calloc(nmemb, size));
}

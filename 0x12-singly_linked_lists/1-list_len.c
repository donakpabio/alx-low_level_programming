#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Do something
 * @h: input
 * Return: result
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
	{
		exit(EXIT_FAILURE);
	}

	if (h->next != NULL)
	{
		return (list_len(h->next) + 1);
	}
	return (1);
}

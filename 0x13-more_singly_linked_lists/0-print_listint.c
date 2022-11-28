#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Do something
 * @h: input
 * Return: result
 */
size_t print_listint(const listint_t *h)
{
	int isnull;

	if (h == NULL)
	{
		return (0);
	}

	isnull = (h == NULL);
	printf("%d\n", isnull ? 0 : h->n);

	if (h->next != NULL)
	{
		return (print_listint(h->next) + 1);
	}
	return (1);
}

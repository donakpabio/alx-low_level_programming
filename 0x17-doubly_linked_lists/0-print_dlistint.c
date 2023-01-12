#include "lists.h"

/**
 * print_dlistint - Do something
 * @h: input
 * Return: result
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}

	printf("%d\n", h->n);
	if (h->next != NULL)
	{
		return (print_dlistint(h->next) + 1);
	}
	return (1);
}

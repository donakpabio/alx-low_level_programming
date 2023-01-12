#include "lists.h"

/**
 * dlistint_len - Do something
 * @h: input
 * Return: result
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}

	if (h->next != NULL)
	{
		return (print_dlistint(h->next) + 1);
	}
	return (1);
}

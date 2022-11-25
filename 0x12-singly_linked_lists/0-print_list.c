#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Do something
 * @h: input
 * Return: result
 */
size_t print_list(const list_t *h)
{
	int isnull;

	isnull = (h == NULL) || (h->str == NULL);
	printf("[%u] %s\n", isnull ? 0 : h->len, isnull ? "(nil)" : h->str);
	if (h->next != NULL)
	{
		return (print_list(h->next) + 1);
	}
	return (1);
}

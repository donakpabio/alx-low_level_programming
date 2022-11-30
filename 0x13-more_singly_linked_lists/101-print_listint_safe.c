#include <stdlib.h>
#include "lists.h"
#include "1-listint_len.c"

/**
 * print_listint_safe - Do something
 * @h: input
 * Return: result
 */
size_t print_listint_safe(const listint_t *h)
{
	int i, s;
	listint_t *t;

	i = 0;
	s = listint_len(h);

	if (h == NULL)
	{
		exit(98);
	}

	while (i < s)
	{
		if (t == NULL && i != 0)
		{
			exit(98);
		}
		printf("[%p] %d\n", i == 0 ? h : t, i == 0 ? h->n : t->n);
		t = i == 0 ? h->next : t->next;
		i++;
	}
	return (s);
}

#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * node_at - Do something
 * @head: input
 * @c: counter
 * @at: at
 * Return: result
 */
dlistint_t *node_at(dlistint_t *head, int c, int at)
{
	if (head == NULL)
	{
		return (NULL);
	}

	if (c == at)
	{
		return (head);
	}

	if (head->next == NULL)
	{
		return (NULL);
	}
	return (node_at(head->next, ++c, at));
}

/**
 * insert_dnodeint_at_index - Do something
 * @h: input
 * @idx: input
 * @n: input
 * Return: result
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *at;
	dlistint_t *d;
	int index;

	index = (int) idx;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	at = node_at(*h, 0, index - 1);
	if (at == NULL)
	{
		if (index != 0)
		{
			return (NULL);
		}
		d = *h;
		if (d != NULL)
		{
			d->prev = new;
		}
		new->next = d;
		new->prev = NULL;
		*h = new;
		return (new);
	}

	new->next = at->next;
	new->prev = at;
	at->next = new;
	if (new->next != NULL)
	{
		(new->next)->prev = new;
	}
	return (new);
}

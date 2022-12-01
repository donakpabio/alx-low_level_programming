#include <stdlib.h>
#include "lists.h"

/**
 * node_at - Do something
 * @head: input
 * @c: counter
 * @at: at
 * Return: result
 */
listint_t *node_at(listint_t *head, int c, int at)
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
 * delete_nodeint_at_index - Do something
 * @head: input
 * @index: input
 * Return: result
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *at;
	listint_t *d;
	int idx;

	idx = (int) index;
	at = node_at(*head, 0, idx - 1);
	if (at == NULL)
	{
		if (index != 0)
		{
			return (-1);
		}
		d = *head;
		*head = d != NULL ? d->next : NULL;
		if (d != NULL)
		{
			free(d);
			return (1);
		}
		return (-1);
	}
	d = at->next;
	at->next = d->next;
	free(d);
	return (1);
}

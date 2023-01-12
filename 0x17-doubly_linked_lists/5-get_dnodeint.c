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
 * get_dnodeint_at_index - Do something
 * @head: input
 * @index: input
 * Return: result
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	return (node_at(head, 0, (int) index));
}

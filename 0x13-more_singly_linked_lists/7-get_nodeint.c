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
 * get_nodeint_at_index - Do something
 * @head: input
 * @index: input
 * Return: result
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	return (node_at(head, 0, (int) index));
}

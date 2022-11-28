#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * last_node - Do something
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
 * insert_nodeint_at_index - Do something
 * @head: input
 * @idx: input
 * @n: input
 * Return: result
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *at;
	int index;

	index = (int) idx;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	at = node_at(*head, 0, index - 1);
	if (at == NULL)
	{
		return (NULL);
	}

	new->next = at->next;
	at->next = new;
	return (new);
}

#include <string.h>
#include <stdlib.h>
#include "lists.h"

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


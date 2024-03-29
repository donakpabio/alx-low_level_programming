#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Do something
 * @head: input
 * @n: input
 * Return: result
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *d;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	d = *head;
	if (d != NULL)
	{
		d->prev = new;
	}
	new->n = n;
	new->prev = NULL;
	new->next = d;
	*head = new;
	return (new);
}

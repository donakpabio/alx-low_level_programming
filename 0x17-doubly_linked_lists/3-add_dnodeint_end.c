#include <stdlib.h>
#include "lists.h"

/**
 * last_node - Do something
 * @head: input
 * Return: result
 */
dlistint_t *last_node(dlistint_t *head)
{
	if (head == NULL)
	{
		return (NULL);
	}
	if (head->next == NULL)
	{
		return (head);
	}
	return (last_node(head->next));
}

/**
 * add_dnodeint_end - Do something
 * @head: input
 * @n: input
 * Return: result
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *ln;

	ln = last_node(*head);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = ln;
	if (ln == NULL)
	{
		*head = new;
	} else
	{
		ln->next = new;
	}
	return (*head);
}

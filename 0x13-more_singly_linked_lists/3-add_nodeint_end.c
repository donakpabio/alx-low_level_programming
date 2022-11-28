#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * last_node - Do something
 * @head: input
 * Return: result
 */
listint_t *last_node(listint_t *head)
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
 * add_nodeint_end - Do something
 * @head: input
 * @n: input
 * Return: result
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ln;

	ln = last_node(*head);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (ln == NULL)
	{
		*head = new;
	} else
	{
		ln->next = new;
	}
	return (*head);
}

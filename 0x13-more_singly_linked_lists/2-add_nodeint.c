#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Do something
 * @head: input
 * @n: input
 * Return: result
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}


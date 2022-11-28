#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Do something
 * @head: input
 * Return: result
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *h;

	n = 0;
	if (*head == NULL)
	{
		return (n);
	}

	n = (*head)->n;
	h = *head;
	if ((*head)->next != NULL)
	{
		*head = (*head)->next;
	}
	free(h);
	return (n);
}

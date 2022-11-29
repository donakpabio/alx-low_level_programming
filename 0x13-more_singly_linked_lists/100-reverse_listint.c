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
 * gnai - Do something
 * @head: input
 * @index: input
 * Return: result
 */
listint_t *gnai(listint_t *head, unsigned int index)
{
	return (node_at(head, 0, (int) index));
}

/**
 * listint_len - Do something
 * @h: input
 * Return: result
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}

	if (h->next != NULL)
	{
		return (listint_len(h->next) + 1);
	}
	return (1);
}

/**
 * reverse_listint - Do something
 * @head: input
 * Return: result
 */
listint_t *reverse_listint(listint_t **head)
{
	int d;
	listint_t *t;

	d = ((int) listint_len(*head)) - 1;
	t = gnai(*head, d);
	while (d >= 0)
	{
		(gnai(*head, d))->next = d - 1 >= 0 ? gnai(*head, d - 1) : NULL;
		d--;
	}
	*head = t;
	return (t);
}

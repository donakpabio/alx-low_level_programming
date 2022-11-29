#include <stdlib.h>
#include "lists.h"
#include "1-listint_len.c"
#include "7-get_nodeint.c"

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
	t = node_at(*head, 0, d);
	while (d >= 0)
	{
		(node_at(*head, 0, d))->next = d - 1 >= 0 ? node_at(*head, 0, d - 1) : NULL;
		d--;
	}
	*head = t;
	return (t);
}

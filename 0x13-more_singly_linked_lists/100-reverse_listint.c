#include <stdlib.h>
#include "lists.h"

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
	t = get_nodeint_at_index(*head, d);
	while (d >= 0)
	{
		(get_nodeint_at_index(*head, d))->next = d - 1 >= 0 ? get_nodeint_at_index(*head, d - 1) : NULL;
		d--;
	}
	*head = t;
	return (t);
}

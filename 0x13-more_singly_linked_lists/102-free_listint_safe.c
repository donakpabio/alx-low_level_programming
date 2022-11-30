#include <stdlib.h>
#include "lists.h"
#include "1-listint_len.c"
#include "7-get_nodeint.c"

/**
 * free_listint_safe - Do something
 * @head: input
 * Return: result
 */
size_t free_listint_safe(listint_t **head)
{
	int i, d, s;

	i = 0;
	s = listint_len(*head);
	d = s - 1;
	while (d >= 0)
	{
		free(node_at(*head, 0, d));
		d--;
	}
	*head = NULL;
	return (s);
}

#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Do something
 * @head: input
 * Return: result
 */
int sum_listint(const listint_t *head)
{
	if (head == NULL)
	{
		return (0);
	}

	if (head->next == NULL)
	{
		return (head->n);
	}

	return (sum_listint(head->next) + head->n);
}

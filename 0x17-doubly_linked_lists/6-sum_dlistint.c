#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Do something
 * @head: input
 * Return: result
 */
int sum_dlistint(const dlistint_t *head)
{
	if (head == NULL)
	{
		return (0);
	}

	if (head->next == NULL)
	{
		return (head->n);
	}

	return (sum_dlistint(head->next) + head->n);
}

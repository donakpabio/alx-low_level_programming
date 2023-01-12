#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Do something
 * @head: input
 * Return: result
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			free_dlistint(head->next);
		}
		free(head);
	}
}

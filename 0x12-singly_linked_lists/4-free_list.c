#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Do something
 * @head: input
 * Return: result
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		exit(EXIT_FAILURE);
	}

	if (head->next != NULL)
	{
		free_list(head->next);
		free(head->str);
	}
	free(head);
}

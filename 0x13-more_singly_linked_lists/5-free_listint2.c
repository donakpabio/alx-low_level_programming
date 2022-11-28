#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Do something
 * @head: input
 * Return: result
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			free_listint(head->next);
		}
		free(head);
	}
}

/**
 * free_listint2 - Do something
 * @head: input
 * Return: result
 */
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;	
}

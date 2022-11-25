#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Do something
 * @head: input
 * @str: input
 * Return: result
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}


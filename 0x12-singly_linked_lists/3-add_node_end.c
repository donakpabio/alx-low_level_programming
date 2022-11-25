#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * last_node - Do something
 * @head: input
 * Return: result
 */
list_t *last_node(list_t *head)
{
	if (head == NULL)
	{
		return (NULL);
	}
	if (head->next == NULL)
	{
		return (head);
	}
	return (last_node(head->next));
}

/**
 * add_node_end - Do something
 * @head: input
 * @str: input
 * Return: result
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ln;

	ln = last_node(*head);
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (ln == NULL)
	{
		*head = new;
	} else
	{
		ln->next = new;
	}
	return (*head);
}

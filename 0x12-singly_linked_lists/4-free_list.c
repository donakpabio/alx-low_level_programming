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
	}
	free(head);
}

int main(void)
{
    list_t *head;

    head = NULL;
    /*add_node_end(&head, "Bob");
    add_node_end(&head, "&");
    add_node_end(&head, "Kris");
    add_node_end(&head, "love");*/
    add_node_end(&head, "asm");
    print_list(head);
    free_list(head);
    head = NULL;
    return (0);
}

#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * last_node - Do something
 * @head: input
 * @c: counter
 * @at: at
 * Return: result
 */
listint_t *node_at(listint_t *head, int c, int at)
{
	if (head == NULL)
	{
		return (NULL);
	}

	if (c == at)
	{
		return (head);
	}

	if (head->next == NULL)
	{
		return (NULL);
	}

	return (node_at(head->next, c++, at));
}

/**
 * get_nodeint_at_index - Do something
 * @head: input
 * @index: input
 * Return: result
 */
listint_t *get_nodeint_at_index(const listint_t *head, unsigned int index)
{
	listint_t *h;

	h = head;
	return (node_at(h, 0, (int) index));
}

int main(void)
{
    listint_t *head;
    listint_t *node;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    node = get_nodeint_at_index(head, 5);
    printf("%d\n", node->n);
    print_listint(head);
    free_listint2(&head);
    return (0);
}

#include <stdlib.h>
#include "lists.h"
#include "7-get_nodeint.c"
#include "1-listint_len.c"

/**
 * print_listint_safe - Do something
 * @h: input
 * Return: result
 */
size_t print_listint_safe(const listint_t *h)
{
	int i, s;
	listint_t *t;

	i = 0;
	s = listint_len(h);

	while (i < s)
	{
		t = get_nodeint_at_index(h, i);
		if (t == NULL)
		{
			exit(98);
		}
		printf("[%p] %d\n", t, t->n);
		i++;
	}
	return (s);
}

int main(void)
{
    listint_t *head;
    listint_t *head2;
    listint_t *node;

    head2 = NULL;
    add_nodeint(&head2, 0);
    add_nodeint(&head2, 1);
    add_nodeint(&head2, 2);
    add_nodeint(&head2, 3);
    add_nodeint(&head2, 4);
    add_nodeint(&head2, 98);
    add_nodeint(&head2, 402);
    add_nodeint(&head2, 1024);
    print_listint_safe(head2);
    head = NULL;
    node = add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    node->next = add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint_safe(head);
    return (0);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    add_dnodeint(&head, 98);
    add_dnodeint(&head, 402);
    add_dnodeint(&head, 1024);
    int c = 0;
    dlistint_t *d;
    d = head;
    while (c < 8)
    {
	dlistint_t *pr;
	dlistint_t *nx;
	int prn;
	int nxn;

	pr = d->prev;
	nx = d->next;
	prn = pr == NULL ? 00 : pr->n;
	nxn = nx == NULL ? 00 : nx->n;
	printf("Prev:%d Current:%d Next:%d\n", prn, d->n, nxn);
	d = d->next;
	c++;
    }
    //print_dlistint(head);
    return (EXIT_SUCCESS);
}

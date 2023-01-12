#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif

#ifndef DLISTINT_S_H
#define DLISTINT_S_H
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
#endif

#ifndef PRINT_DLISTINT_H
#define PRINT_DLISTINT_H
/**
 * print_dlistint - Do something
 * @h: input
 * Return: result
 */
size_t print_dlistint(const dlistint_t *h);
#endif

#ifndef DLISTINT_LEN_H
#define DLISTINT_LEN_H
/**
 * dlistint_len - Do something
 * @h: input
 * Return: result
 */
size_t dlistint_len(const dlistint_t *h);
#endif

#ifndef LAST_NODE_H
#define LAST_NODE_H
/**
 * last_node - Do something
 * @head: input
 * Return: result
 */
dlistint_t *last_node(dlistint_t *head);
#endif

#ifndef ADD_DNODEINT_END_H
#define ADD_DNODEINT_END_H
/**
 * add_dnodeint_end - Do something
 * @head: input
 * @n: input
 * Return: result
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
#endif

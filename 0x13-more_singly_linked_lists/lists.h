#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif

#ifndef LISTINT_S_H
#define LISTINT_S_H
/**
 * struct listint_s - singly linked list
 * @n: input
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
#endif

#ifndef PRINT_LISTINT_H
#define PRINT_LISTINT_H
/**
 * print_listint - Do something
 * @h: input
 * Return: result
 */
size_t print_listint(const listint_t *h);
#endif

#ifndef PRINT_LISTINT_SAFE_H
#define PRINT_LISTINT_SAFE_H
/**
 * print_listint_safe - Do something
 * @h: input
 * Return: result
 */
size_t print_listint_safe(const listint_t *h);
#endif

#ifndef LISTINT_LEN_H
#define LISTINT_LEN_H
/**
 * listint_len - Do something
 * @h: input
 * Return: result
 */
size_t listint_len(const listint_t *h);
#endif

#ifndef ADD_NODEINT_H
#define ADD_NODEINT_H
/**
 * add_nodeint - Do something
 * @head: input
 * @n: input
 * Return: result
 */
listint_t *add_nodeint(listint_t **head, const int n);
#endif

#ifndef ADD_NODEINT_END_H
#define ADD_NODEINT_END_H
/**
 * add_nodeint_end - Do something
 * @head: input
 * @n: input
 * Return: result
 */
listint_t *add_nodeint_end(listint_t **head, const int n);
#endif

#ifndef FREE_LISTINT_H
#define FREE_LISTINT_H
/**
 * free_listint - Do something
 * @head: input
 * Return: Nothing
 */
void free_listint(listint_t *head);
#endif

#ifndef FREE_LISTINT2_H
#define FREE_LISTINT2_H
/**
 * free_listint2 - Do something
 * @head: input
 * Return: result
 */
void free_listint2(listint_t **head);
#endif

#ifndef LAST_NODE_H
#define LAST_NODE_H
/**
 * last_node - Do something
 * @head: input
 * Return: result
 */
listint_t *last_node(listint_t *head);
#endif

#ifndef GET_NODEINT_AT_INDEX_H
#define GET_NODEINT_AT_INDEX_H
/**
 * get_nodeint_at_index - Do something
 * @head: input
 * @index: input
 * Return: result
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
#endif

#ifndef GNAI_H
#define GNAI_H
/**
 * gnai - Do something
 * @head: input
 * @index: input
 * Return: result
 */
listint_t *gnai(listint_t *head, unsigned int index);
#endif

#ifndef NODE_AT_H
#define NODE_AT_H
/**
 * node_at - Do something
 * @head: input
 * @c: counter
 * @at: at
 * Return: result
 */
listint_t *node_at(listint_t *head, int c, int at);
#endif

#ifndef SUM_LISTINT_H
#define SUM_LISTINT_H
/**
 * sum_listint - Do something
 * @head: input
 * Return: result
 */
int sum_listint(const listint_t *head);
#endif

#ifndef INSERT_NODEINT_AT_INDEX_H
#define INSERT_NODEINT_AT_INDEX_H
/**
 * insert_nodeint_at_index - Do something
 * @head: input
 * @idx: input
 * @n: input
 * Return: result
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
#endif

#ifndef POP_LISTINT_H
#define POP_LISTINT_H
/**
 * pop_listint - Do something
 * @head: input
 * Return: result
 */
int pop_listint(listint_t **head);
#endif

#ifndef DELETE_NODEINT_AT_INDEX_H
#define DELETE_NODEINT_AT_INDEX_H
/**
 * delete_nodeint_at_index - Do something
 * @head: input
 * @index: input
 * Return: result
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index);
#endif

#ifndef REVERSE_LISTINT_H
#define REVERSE_LISTINT_H
/**
 * reverse_listint - Do something
 * @head: input
 * Return: result
 */
listint_t *reverse_listint(listint_t **head);
#endif

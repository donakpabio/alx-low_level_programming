#include <stdio.h>

#ifndef PRINT_NAME_H
#define PRINT_NAME_H
/**
 * print_name - Do something
 * @name: input
 * @f: input
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *));
#endif

#ifndef PRINT_H
#define PRINT_H
/**
 * print - Do something
 * @name: input
 * Return: Nothing
 */
void print(char *name);
#endif

#ifndef _PUTCHAR_H
#define _PUTCHAR_H
/**
 * _putchar - Do something
 * @c: input
 * Return: Nothing
 */
void _putchar(int c);
#endif

#ifndef ARRAY_ITERATOR_H
#define ARRAY_ITERATOR_H
/**
 * array_iterator - Do something
 * @array: input
 * @size: input
 * @action: input
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int));
#endif

#ifndef INT_INDEX_H
#define INT_INDEX_H
/**
 * int_index - Do something
 * @array: input
 * @size: input
 * @cmp: input
 * Result: result
 */
int int_index(int *array, int size, int (*cmp)(int));
#endif

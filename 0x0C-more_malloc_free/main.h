#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Do something
 * @b: input
 * Return: result
 */
void *malloc_checked(unsigned int b);

/**
 * string_nconcat - Do something
 * @s1: input
 * @s2: input
 * @n: input
 * Return: result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - Do something
 * @nmemb: input
 * @size: input
 * Return: result
 */
void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range - Do something
 * @min: input
 * @max: input
 * Return: result
 */
int *array_range(int min, int max);

/**
 * _realloc - Do something
 * @ptr: input
 * @old_size: input
 * @new_size: input
 * Return: result
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

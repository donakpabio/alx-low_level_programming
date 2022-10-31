#include <stdio.h>

/**
 * _memset - Do something
 * @s: input
 * @b: input
 * @n: input
 * Return: Result
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - Do something
 * @dest: input
 * @src: input
 * @n: input
 * Return: result
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - Do something
 * @s: input
 * @c: input
 * Return: result
 */
char *_strchr(char *s, char c);


/**
 * _strspn - Do something
 * @s: input
 * @accept: input
 * Return: result
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - Do something
 * @s: input
 * @accept: input
 * Return: result
 */
char *_strpbrk(char *s, char *accept);

/**
 * strstr - Do something
 * @haystack: input
 * @needle: input
 * Return: result
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - Print chess board
 * @a: input
 * Return: Nothing
 */
void print_chessboard(char (*a)[8]);

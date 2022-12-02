#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif

#ifndef BINARY_TO_UINT_H
#define BINARY_TO_UINT_H
/**
 * binary_to_uint - Do something
 * @b: input
 * Return: result
 */
unsigned int binary_to_uint(const char *b);
#endif

#ifndef PRINT_BINARY_H
#define PRINT_BINARY_H
/**
 * print_binary - Do something
 * @n: input
 * Return: result
 */
void print_binary(unsigned long int n);
#endif

#ifndef GET_BIT_H
#define GET_BIT_H
/**
 * get_bit - Do something
 * @n: input
 * @index: input
 * Return: result
 */
int get_bit(unsigned long int n, unsigned int index);
#endif

#ifndef SET_BIT_H
#define SET_BIT_H
/**
 * set_bit - Do somethng
 * @n: input
 * @index: input
 * Return: result
 */
int set_bit(unsigned long int *n, unsigned int index);
#endif

#ifndef CLEAR_BIT_H
#define CLEAR_BIT_H
/**
 * clear_bit - Do something
 * @n: input
 * @index: input
 * Return: result
 */
int clear_bit(unsigned long int *n, unsigned int index);
#endif

#ifndef FLIP_BITS_H
#define FLIP_BITS_H
/**
 * flip_bits - Do something
 * @n: input
 * @m: input
 * Return: result
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif

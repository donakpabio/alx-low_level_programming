#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int l1 = a > b ? a : b;
	int l2 = b > c ? b : c;
	int l = l1 > l2 ? l1 : l2;

	return (l);
}

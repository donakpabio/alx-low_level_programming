#include <string.h>
#include "main.h"

/**
 * reverse_array - reverse array
 * @a: input
 * @n: input
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int v;
	int i = 0;

	while (i < (n / 2))
	{
		v = *(a + i);
		*(a + i) = *(a + (n - i - 1));
		*(a + (n - i - 1)) = v;
		i++;
	}
}

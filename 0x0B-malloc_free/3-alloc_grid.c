#include "main.h"

/**
 * alloc_grid - Do something
 * @width: input
 * @height: input
 * Return: result
 */
int **alloc_grid(int width, int height)
{
	int *ar, w = 0, h = 0;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	ar = malloc(width * height * sizeof(int));
	if (ar == NULL)
	{
		return (NULL);
	}

	while (w < width)
	{
		while (h < height)
		{
			ar[w][h] = 0;
			h++;
		}
		w++;
	}
	return (ar);
}

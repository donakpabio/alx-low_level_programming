#include "main.h"

/**
 * alloc_grid - Do something
 * @width: input
 * @height: input
 * Return: result
 */
int **alloc_grid(int width, int height)
{
	int **ar, w = 0, h = 0;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	ar = malloc(height * width * sizeof(int));
	if (ar == NULL)
	{
		return (NULL);
	}

	while (h < height)
	{
		ar[h] = malloc(width * sizeof(int));
		while (w < width)
		{

			ar[h][w] = 0;
			w++;
		}
		h++;
	}
	return (ar);
}

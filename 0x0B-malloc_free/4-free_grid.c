#include "main.h"

/**
 * free_grid - Do something
 * @grid: input
 * @height: input
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int h = 0;

	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}

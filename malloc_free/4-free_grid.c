#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Write a function that returns a pointer
 * to a 2 dimensional array of integers
 * @grid: array 2D
 * @height: hauteur
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void free_grid(int **grid, int height)
{
	int i;


	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}
	free(grid);
}

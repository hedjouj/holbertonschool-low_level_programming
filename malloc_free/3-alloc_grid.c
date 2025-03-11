#include "main.h"
#include <stdlib.h>

/**
 * *alloc_grid - Write a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: largeur
 * @height: hauteur
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int **alloc_grid(int width, int height)
{
	int **copy;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	copy = malloc(sizeof(int *) * height);

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		copy[i] = malloc(sizeof(int) * width);
		if (copy[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(copy[j]);
			}
			free(copy);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			copy[i][j] = 0;
		}
	}
	return (copy);
}

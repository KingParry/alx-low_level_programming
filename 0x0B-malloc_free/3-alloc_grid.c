#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function begins
 * @height: height data
 * @width: width data
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			while (h >= 0)
				free(grid[h--]);
			free(grid);
			return (NULL);
		}


		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}

	return (grid);
}

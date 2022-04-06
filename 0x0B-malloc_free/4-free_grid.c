#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function to free 2 dimensonal array after creation
 * @**grid: the grid pointer
 * @height: the height parameter
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

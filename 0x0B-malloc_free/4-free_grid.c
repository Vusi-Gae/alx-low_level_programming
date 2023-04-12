#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2-dimensional array of integers.
 * @grid: 2-dimensional array of integers to be freed.
 * @height: The height of grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; index < height; index++)
		free(grid[i]);

	free(grid);
}

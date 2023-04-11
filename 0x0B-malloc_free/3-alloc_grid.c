#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: An int type
 * @height: An int type
 * Return: grif of 0s
 */

int **alloc_grid(int width, int height)
{
	int i, x;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (x = 0; x < i;  x++)
				free(ptr[x]);
			free(ptr);
			return (NULL);
		}
		for (x = 0; x < width; x++)
		{
			ptr[i][x] = 0;
		}
	}
	return (ptr);
}

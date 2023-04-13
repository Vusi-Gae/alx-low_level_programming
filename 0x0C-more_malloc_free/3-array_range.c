#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum int value
 * @max: maximum int value
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr, i, size;

	i = 0;

	if (min > max)
		return (NULL);

	size = max - min;

	ptr = malloc(sizeof(int) * size + 1);

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}

	return (ptr);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - A  function that creates an array of chars,
 *		and initializes it with a specific char.
 * @size: unsigned int type
 * @c: char type
 *
 * Return: Pointer to the array, or 0 if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	*s = malloc((size) * sizeof(char));

	if (s == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_strlen - A function that return a length of a string.
 *@s: char type
 *Return: Lenth of a string
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}

/**
 * _strdup - function to return a poiter to a string
 * @str: pointer to string array input
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	char *ptr;
	int size;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	ptr = malloc(size * sizeof(char));

	i = 0;
	while (x < size)
	{
		if (ptr == NULL)
		{
			return (NULL);
	}
		ptr[x] = str[x];
		x++;
	}
	return (ptr);
}

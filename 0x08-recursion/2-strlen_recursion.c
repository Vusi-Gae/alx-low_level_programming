#include "main.h"

/**
 * _strlen_recursion - a function that returns a length of a string
 * @s: string to measure.
 *
 * Return: Lenth of a string as INT
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

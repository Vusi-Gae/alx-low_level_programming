#include "main.h"

/**
 * main - A function that prints a string,
 *        followed by a new line.
 * return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return (0);
	}
		_putchar(*s)
		_puts_recursion(s + 1);
}

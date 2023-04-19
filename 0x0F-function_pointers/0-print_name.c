#include "function_pointers.h"
#include "stdlib.h"

/**
 * print_name - Prints a name
 * @name: name
 * @f: funtion
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *));
{
	if (name && f)
	f(name);
}

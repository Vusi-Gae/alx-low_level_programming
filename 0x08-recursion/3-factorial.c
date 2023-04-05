#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: an Int to find a factorial for
 * Return: -1 to indicate an error
 * And 1 for success
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}

#include "main.h"

/**
 * binary_to_uint - Func that converts binary to an unsigned int
 * @b: A ptr to a string of 0 & 1 chars
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int multiplier = 1;
	int length = 0;

	if (b == '\0')
		return (0);

	for (length = 0; b[length];)
	       	length++;

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		number += (b[length] - '0') * multiplier;
		multiplier *= 2;
	}

	return (number);
}

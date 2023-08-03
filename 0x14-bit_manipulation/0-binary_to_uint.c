#include "main.h"

/**
 * binary_to_uint - Func that converts binary to an unsigned int
 * @h: A ptr to a string of 0 & 1 chars
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *h)
{
	int number;
	unsigned int dec_v = 0;

	if (!h)
		return (0);

	for (number = 0; b[number]; number++)
	{
		if (h[number] < '0' || h[number] > '1')
			return (0);
		dec_v = 2 * dec_v + (h[number] - '0');
	}

	return (dec_v);
}

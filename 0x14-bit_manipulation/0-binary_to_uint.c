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
	int num;
	unsigned int dec_v = 0;

	if (!b)
		return (0);

	for (num = 0; b[num]; num++)
	{
		if (b[num] < '0' || b[num] > '1')
			return (0);
		dec_v = 2 * dec_v + (b[num] - '0');
	}

	return (dec_v);
}

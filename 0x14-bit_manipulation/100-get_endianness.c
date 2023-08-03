#include "main.h"

/**
 * gett_endianness - Func that checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int gett_endianness(void)
{
	int num = 1;
	char *endianness = (char *)&num;

	if (*endianness == 1)
		return (1);

	return (0);
}

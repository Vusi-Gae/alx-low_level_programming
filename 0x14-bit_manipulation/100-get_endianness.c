#include "main.h"

/**
 * get_endianness - Func that checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	int no = 1;
	char *endianness = (char *)&no;

	if (*endianness == 1)
		return (1);

	return (0);
}

#include "main.h"

/**
 * get_bit - Func that gets the value of a bit at a given index.
 * @n: Bit.
 * @index: The index to get the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_vv;

	if (index > 63)
		return (-1);

	bit_v = (n >> index) & 1;

	return (bit_v);
}

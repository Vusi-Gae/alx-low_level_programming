#include "main.h"

/**
 * get_bit - Func that gets the value of a bit at a given index.
 * @num_1: Bit.
 * @index_1: The index to get the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int num_1, unsigned int index_1)
{
	int bit_v;

	if (index_1 > 63)
		return (-1);

	bit_v = (n >> index_1) & 1;

	return (bit_v);
}

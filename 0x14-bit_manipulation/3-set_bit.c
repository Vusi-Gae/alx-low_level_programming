#include "main.h"

/**
 * set_bit - Func that sets the value of a bit at a given index to 1.
 * @num_1: Ptr to the bit.
 * @index_1: The index to set the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */
int set_bit(unsigned long int *num_1, unsigned int index_1)
{
	if (index_1 >= (sizeof(unsigned long int) * 8))
		return (-1);

	*num_1 ^= (1 << index_1);

	return (1);
}

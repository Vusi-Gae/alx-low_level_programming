#include "main.h"

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_unit(const char *b)

{
	unsigned int number = 0;
	unsigned int multipleir = 1;
	int length;

	if (number == '\0')
	return (0);

	for (length = 0; number[length];)
		length++;

	for (length -= 1; length >= 0; length--)
	{
		if (number[length] != '0' && number[length] != '1')
			return (0);

		result += (number[length] - '0') * multiplier;
		multiplier *= 2;
	}

return (result);
}

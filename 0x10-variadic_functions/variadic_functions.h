#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * Desc: Header containing all prototypes
 */

#include <stdarg.h>

/**
 * struct print - A new struct type defining a printe
 * @symbol: Represents data type
 * @print: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

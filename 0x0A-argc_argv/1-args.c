#include <stdio.h>
#include "main.h"

/**
 * main -  program that prints the number of arguments passed into it
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 * Return: Alwasy 0 ( Success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}

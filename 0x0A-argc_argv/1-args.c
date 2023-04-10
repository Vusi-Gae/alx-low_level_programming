#include <stdio.h>

/**
 * main -  program that prints the number of arguments passed into it
 * @args: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 * Return: Alwasy 0 (Success)
 */

int main(int args, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);

	return (0);
}

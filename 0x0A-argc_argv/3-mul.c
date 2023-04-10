#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - A program that multiplies two numbers.
 * atoi is a function that converts a string into an int
 * @argc: argumets
 * @argv: An array of arguments
 *Return: Always 0 (Success) and 1 on Error
 */

int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}

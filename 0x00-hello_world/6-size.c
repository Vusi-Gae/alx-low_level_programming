#include <stdio.h>

/**
 *main - program that prints the size of various types on the computer
 *
 *Use the sizeof operator to operate the size of the variables
 *Return: 0
 */

int main(void)
{
	char a;
	int b;
	long int x;
	long long int y;
	float z;

	printf("Size of a char: %ld byte(s)\n", sizeof(a));
	printf("Size of an int: %ld byte(s)\n", sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", sizeof(x));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(y));
	printf("Size of a float: %ld byte(s)\n", sizeof(z));
	return (0);
}

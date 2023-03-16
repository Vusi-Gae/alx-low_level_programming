#include <stdio.h>
/**
 * main - program that prints the size of various types on the computer
 *
 * return: Always return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int x;
	long long int y;
	float z;

printf("Size of a char: %lu byte(s)\n", (unsigned int)sizeof(a));
printf("Size of a int: %lu byte(s)\n", (unsigned int)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned int)sizeof(x));
printf("Size of a long long int: %lu byte(s)\n", (unsigned int)sizeof(y));
printf("Size of a float: %lu byte(s)\n", (unsigned int)sizeof(z));
return (0);
}

#include <stdio.h>
/**
 * main - C program that prints the alphabet in lowercase
 * Return: always 0 (Success)
 */

int main(void)
{
char z = 'a';

while (z <= 'z')
{
	if (z != 'e' && z != 'q')
	{
		putchar(z);
	}
	z++;
}
putchar('\n');
return (0);
}

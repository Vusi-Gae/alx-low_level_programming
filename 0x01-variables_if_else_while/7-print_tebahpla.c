#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - program that prints the lowercase alphabet in reverse
 * Return: Alwyas return 0 (Success)
 */

int main(void)
{
char z;

for (z = 'z'; z >= 'a'; z--)
{
	putchar(z);
}
putchar('\n');

return (0);
}

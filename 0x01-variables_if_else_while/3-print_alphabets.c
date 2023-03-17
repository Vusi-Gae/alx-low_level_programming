#include <stdio.h>
/**
 * main - C program that prints the alphabet in lowercase and  uppercase
 * Return: Always return 0 (Success)
 */
int main(void)
{
char z = 'a';
char Z = 'A';

while (z <= 'z')
{
	putchar(z);
	z++;
}
while (Z <= 'Z')
{
	putchar(Z);
	Z++;
}
putchar('\n');
return (0);
}

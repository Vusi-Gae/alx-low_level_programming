#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - C program that prints all numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
a = 0;

while (a <= 9)
{
	printf("%d", a);
	a++;
}
putchar('\n');

return (0);
}

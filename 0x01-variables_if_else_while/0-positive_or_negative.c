#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A C program assigning a 0-positive_or_negative.c
 * Return: Always return 0 (Success)
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

if (n > 0)
{
	printf("%d is positive\n", n);
}

else if (n == 0)
{
	printf("%d is zero\n", n);
}

else
{
	prinft("%d is negative\n", n);
}
return (0);
}

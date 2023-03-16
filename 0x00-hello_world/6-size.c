#include <stdio.h>
/**
 * main - program that prints the size of various types on the compute
 * return : Always return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int x;
	long long int y;
	float z;

printf("Size of a char: %lu byte(s)\n" (unsigned long) sizeof(a));
printf("Size of an int : %lu byte(s)\n" (unsigned long) sizeof(b));
printf("Size of a long int: %lu byte(s)\n" (unsigned long) sizeof(x));
printf("Size of long long int: %lu byte(s)\n" (unsigned long) sizeof(y));
printf("Size of float: %lu byte(s)\n" (unsigned long) sizeof(z));
return (0);
}

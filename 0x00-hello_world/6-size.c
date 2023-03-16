#include <stdio.h>
/**
 * main - The size of various types on the computer it is compiled and run on
 * Return: Always accept 0 (Success)
 */
int main(void)
{
char a;
int b;
long int x;
long long int y;
float z;
printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a float: %lu bytes(s)\n" (unsigned long)sizeof(z));
return (0);

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
printf("Size of a char: %ld bytes(s)\n", sizeof(a));
printf("Size of an int: %ld bytes(s)\n", sizeof(b));
printf("Size of a long int: %ld byte(s)\n", sizeof(x));
printf("Size of a long long int: %ld byte(s)\n", sizeof(y));
printf("Size of a float: %ld bytes(s)\n" sizeof(z));
return (0);

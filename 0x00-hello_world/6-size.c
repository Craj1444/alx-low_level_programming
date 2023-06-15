#include<stdio.h>
/**
 * main - A program that prints size of various computer types
 * Return: Always  0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %d bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %d  bytes(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %d bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %d bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %d bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}

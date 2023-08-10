#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This C program print with sizeof function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long int x;
	long long d;
	float f;

	printf("Size of a char:%lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of a int:%lu byte(s)\n", (unsigned long) sizeof(i));
	printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float:%lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

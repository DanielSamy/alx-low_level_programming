#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This C program prints hexadecimal
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, x;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (x = 65; x < 71; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

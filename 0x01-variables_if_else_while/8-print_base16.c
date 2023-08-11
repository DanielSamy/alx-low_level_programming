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
	for (x = 97; x < 103; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

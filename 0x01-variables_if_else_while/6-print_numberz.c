#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This C program prints prints all single digit number
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}

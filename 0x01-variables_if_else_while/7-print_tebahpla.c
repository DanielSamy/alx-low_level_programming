#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This C program prints the alphabet in reverse
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}

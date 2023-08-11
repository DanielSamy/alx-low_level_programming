#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This C program prints the alphabet letters except e and q
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}

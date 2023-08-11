#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This C program prints comnination
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, x;

	for (i = 48; i <= 56; i++)
	{
		for (x = 49; x <= 57; x++)
			if (i != 56 || x != 57)
			{
				putchar(',');
				putchar(' ');
			}
			if (x == 57)
			{
				putchar("\n");
			}
	}
	putchar('\n');
	return (0);
}

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
	int i, x, d;

	for (i = 48; i <= 56; i++)
	{
		for (x = 49; x <= 57; x++)
		{
			for (d = 50; d < 58; d++)
			{

				if (d > x && x > i)
				{
					putchar(i);
					putchar(x);
					putchar(d);
					if (i != 55 || x != 56)
					{
						putchar(',');
						putchar(' ');
				}	}
			}
		}
	}
	putchar('\n');
	return (0);
}

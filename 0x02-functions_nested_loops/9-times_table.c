#include "main.h"

/**
 * times_table - print the 9 times table
 *
*/

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 1; mult <= 9; mult++)
		{
			prod = num * mult;
			if ( mult == 0)
			{
				_putchar(prod + '0');
			}

			if (prod < 10 && mult != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else if (prod >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
	}	_putchar('\n');
}

#include "main.h"

/**
 * print_most_numbers - print 0 - 9 execpt 2 and 4
 * Retuen: Always: 0 (Success)
*/

void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
			continue;
		_putchar(num);
	}
	_putchar('\n');
}

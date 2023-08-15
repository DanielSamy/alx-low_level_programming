#include "main.h"

/**
* main - Entry point
*
*Description: print _putchar in alphabet
*
*Return: Always 0 (success)
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}

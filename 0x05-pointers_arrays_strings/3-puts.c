#include "main.h"
#include "_putchar"

/**
 * _puts - print a string follwed by new line
 * @str: string parameter to print
 * Return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

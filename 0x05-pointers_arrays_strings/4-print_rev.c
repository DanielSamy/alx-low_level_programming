#include "main.h"

/**
 * print_rev - print reversed string follwed by new line
 * @s: pointer to string
 * Return: void
*/

void print_rev(char *s)
{
	int counter = 0;
	int rev;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	s--;
	for (rev = counter; rev > 0; rev--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _memset - fill a block of memory
 * @s: starting address
 * @b: the value
 * @n: number of bytes
 * Return: charged array
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}

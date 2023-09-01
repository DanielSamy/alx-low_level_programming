#include "main.h"

/**
 * _memcpy -  function copies memory area
 * @dest: memory where stored
 * @src: memory where copied
 * @n: number of bytes
 * Return: copied memory
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

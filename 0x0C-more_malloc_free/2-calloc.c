#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to be filled
 * @b: constant char
 * @n: number of times to copy
 * Return: pointer s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *d = s;

	while (n--)
		*s++ = b;
	return (d);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array length
 * @size: size of each element
 * Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(size * nmemb);

	if (str == NULL)
		return (NULL);

	_memset(str, 0, nmemb * size);

	return (str);
}


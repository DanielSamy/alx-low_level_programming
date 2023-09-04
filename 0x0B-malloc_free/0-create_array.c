#include "main.h"

/**
 * create_array - create array of char
 * @size: size of array
 * @c: char
 * Return: pointer of array
*/

char *create_array(unsigned int size, char c)
{
	char *j = malloc(size);

	if (size == 0 || j == NULL)
		return (NULL);
	while (size--)
		j[size] = c;
	return (j);
}

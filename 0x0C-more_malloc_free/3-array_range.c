#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 * Return: pointer array
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i, length;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	ptr = malloc(sizeof(int) * length);

	if (!ptr)
		return (NULL);

	for (i = 0; i < length; i++)
		ptr[i] = min++;

	return (ptr);
}


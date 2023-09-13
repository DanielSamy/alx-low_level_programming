#include "function_pointers.h"

/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @size: array size
 * @action: pointer
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int d;

	if (array == NULL || action == NULL)
		return;

	for (d = 0; d < size; d++)
	{
		action(array[d]);
	}
}


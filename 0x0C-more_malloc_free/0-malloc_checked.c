#include "main.h"

/**
 * malloc_checked -  allocates memory using malloc
 * @b: number of bytes
 * Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *d = malloc(b);

	if (d == 0)
		exit(98);
	return (d);
}

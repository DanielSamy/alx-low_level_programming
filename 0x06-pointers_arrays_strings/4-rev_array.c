#include "main.h"

/**
 * reverse_array - reverse a array integers
 * @a: array
 * @n: number of elemnt
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

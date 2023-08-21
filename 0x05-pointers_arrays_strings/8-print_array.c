#include "main.h"

/**
 * print_array - print element seperated by comma
 * @a: array name
 * @n: number of element
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}

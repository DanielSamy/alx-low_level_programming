#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: input parameter 1
 * @b: input parameter 2
*/

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

}

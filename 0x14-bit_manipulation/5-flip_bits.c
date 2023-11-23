#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be flipped
 * @n: number
 * @m: The number to flip n to
 *
 * Return: The necessary number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dm = n ^ m, bit = 0;

	while (dm > 0)
	{
		bit += (dm & 1);
		dm >>= 1;
	}

	return (bit);
}

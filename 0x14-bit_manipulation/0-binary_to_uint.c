#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
	int length;
	unsigned int number = 0;

	if (!b)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}
	for (length = 0; b[length] != '\0'; length++)
	{
		number <<= 1;
		if (b[length] == '1')
			number += 1;
	}
	return (number);
}

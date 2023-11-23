#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	int number = 1;
	char *endianness = (char *)&number;

	if (*endianness == 1)
		return (1);

	return (0);
}

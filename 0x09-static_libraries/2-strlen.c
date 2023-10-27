#include "main.h"

/**
 * _strlen - return the length of string
 * @s: string paramerter input
 * Return: length of string
*/

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}

	return (counter);
}

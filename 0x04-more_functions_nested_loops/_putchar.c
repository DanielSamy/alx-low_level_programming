#include <unistd.h>
#include "main.h"

/**
 * _putchar - writesnthe character c to stdout
 *
 * @c: character to print
 *
 * Return: on success 1
 * on error -1 is returned, and error is set appropiately.
 */

int _putchar(char c)
	return (write(1, &c, 1));

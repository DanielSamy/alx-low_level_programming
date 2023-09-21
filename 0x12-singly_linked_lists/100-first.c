#include "lists.h"

void daniel(void) __attribute__ ((constructor));

/**
 * daniel - executed before the main
 *
 * Return: void
 */
void daniel(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}


#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: This C program print a qoute with pointer and writ function
 *
 * Return: 1 (not Success)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, message, 59);
	return (1);
}

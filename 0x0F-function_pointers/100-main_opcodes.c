#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the opcodes
 *              of its own main function.
 *              Usage: ./main number_of_bytes
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always Successful
*/

int main(int argc, char *argv[])
{
	int index, numbytes;
	char *str = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numbytes = atoi(argv[1]);
	if (numbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < numbytes; index++)
	{
		printf("%02x", str[index] & 0xFF);
		if (index != numbytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}

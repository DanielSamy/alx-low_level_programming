#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int total;

	if (argc < 3)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}

	total = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", total);

	return (EXIT_SUCCESS);
}

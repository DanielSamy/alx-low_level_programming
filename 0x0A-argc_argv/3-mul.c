#include <stdio.h>
#include <stdlib.h>

/**
 * main - print multiple of two number
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success), 1 (Error)
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

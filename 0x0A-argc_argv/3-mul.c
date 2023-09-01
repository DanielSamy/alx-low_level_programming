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
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1] * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

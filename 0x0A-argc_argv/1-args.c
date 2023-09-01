#include <stdio.h>

/**
 * main - print number of arrguments
 * @argc: number of arrguments
 * @argv: array of arrguments
 * Return: Always 0 (success)
*/

int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

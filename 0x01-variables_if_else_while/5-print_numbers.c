#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This C program prints all single digit numbers of base 10
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("\n");

	return (0);
}

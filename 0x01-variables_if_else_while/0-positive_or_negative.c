#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This C program check the is postive or negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is postive\n", n);
	else if (n == 0)
		printf("%d is postive\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}

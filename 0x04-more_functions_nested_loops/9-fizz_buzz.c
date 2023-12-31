#include "main.h"
#include <stdio.h>

/**
 * main - print numbers 1 - 100 followed by new line
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (!(num % 3 == 0) && num % 5 == 0)
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This C program prints the alphabet in lowercase& uppercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This C program prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');

	return (0);
}

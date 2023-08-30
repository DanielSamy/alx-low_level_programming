#include "main.h"

/**
 * _sqrt_recursion - return natural sqaure root
 * @n: number of square root
 * @value: square root
 * Return: result of sqaure root
*/

int square(int n, int value);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find sqaure root
 * @n: number of sqaure root
 * @value: sqaure root
 * Return: result of squre root
*/

int square(int n, int value)
{
	if (value * value == n)
		return (value);
	else if (value * value < n)
		return (square(n, value + 1));
	else
		return (-1);
}

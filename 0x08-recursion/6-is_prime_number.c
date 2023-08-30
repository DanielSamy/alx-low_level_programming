#include "main.h"

/**
 * is_prime_number - check if n is prime number
 * @n: int
 * @i: int
 * Return: 1 if prime integer or 0 otherwise
*/

int prime(int n, int i);
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - check if n is prime number
 * @n: int
 * @i: int
 * Return: 1 if prime integer or 0 otherwise
*/

int prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (prime(n, i + 1));
}

#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its paramters
 * @n: The number of paramters
 * @...: A variable number 
 * Return: sum of integer
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0, i = n;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}


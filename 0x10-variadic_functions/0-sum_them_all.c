#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters
 *
 * @n: start of input variables
 *
 * Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list app;
	unsigned int par, sum = 0;

	va_start(app, n);

	for (par = 0; par < n; par++)
		sum += va_arg(app, int);
	va_end(app);

	return (sum);
}

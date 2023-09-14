#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed
 * @n: The number of integer
 * @...: A variable number
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	int i = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(num, n);
	while (i--)
		printf("%d%s", va_arg(num, int),
			i ? (separator ? separator : "") : "\n");

	va_end(num);
}


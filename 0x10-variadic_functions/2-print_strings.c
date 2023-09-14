#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed
 * @n: The number of string
 * @...: A variable number of string
 * Description: If separator is NULL
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list dan;
	char *str;
	unsigned int mar;

	va_start(dan, n);

	for (mar = 0; mar < n; mar++)
	{
		str = va_arg(dan, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (mar != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(dan);
}


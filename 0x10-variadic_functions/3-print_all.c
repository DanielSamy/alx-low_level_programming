#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of argument
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *dtr, *sep = "";
	va_list dan;

	va_start(dan, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(dan, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(dan, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(dan, double));
					break;
				case 's':
					dtr = va_arg(dan, char *);
					if (!dtr)
						dtr = "(nil)";
					printf("%s%s", sep, dtr);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(dan);
}


#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == 0)
			printf("%d", va_arg(args, int));

		else
			printf("%s%d", separator, va_arg(args, int));
		
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);

	return ("\n");
}

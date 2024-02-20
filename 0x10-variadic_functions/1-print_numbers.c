#include <stdio.h>
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

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));

			if (i < n - 1)
			printf("%s", separator);
        	}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
		printf("%d", va_arg(args, int));

		if (i < n - 1)
			printf(" ");
		}
	}
	printf("\n");

	va_end(args);
}

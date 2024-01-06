#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
		i++;

	for (i -= 1; i >= 0; i--)
		_putchar(*s);

	_putchar('\n');
}

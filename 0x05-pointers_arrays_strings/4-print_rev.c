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

	while (*s != '\0')
		s++;

	for (i = i - 1; i > 0; i--)
	{
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}

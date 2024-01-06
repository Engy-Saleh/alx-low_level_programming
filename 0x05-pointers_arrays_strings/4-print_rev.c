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
	{
		s[i];
		i++;
	}

	while (i--)
		_putchar(s[i]);

	_putchar('\n');
}

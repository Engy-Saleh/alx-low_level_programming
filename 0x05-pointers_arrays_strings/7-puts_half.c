#include"main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
 */

void puts_half(char *s)
{
	int i;

	i = 0;
	for (i /= 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}

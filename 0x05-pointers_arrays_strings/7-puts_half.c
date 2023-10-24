#include"main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++
	for (i /= 0; str[i]!= '\0'; i++)
		_putchar (str[i]);
	_putchar ('\n');
}

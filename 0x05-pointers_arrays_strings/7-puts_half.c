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
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	if (str[i] / 10 == 0)
	{
		for (i = str / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	}

	else
		_putchar((str[i] / 10) + '0')

	_putchar('\n');
}


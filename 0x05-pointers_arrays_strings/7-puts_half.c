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

	if (i % 2 == 0)
	{
		for (n = i / 2; str[n] != '\0'; n++)
		_putchar(str[n]);
	}

	else
	{
		for (n = (i - 1) / 2; str[n] != '\0'; n++)
		_putchar(str[i]);
	}
	_putchar('\n');
}


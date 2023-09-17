#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: prints the last digit of a number
 * @j: takes the input number
 *
 * Return: the last digit (i)
 */

int print_last_digit(int j)
{
	int i = j % 10;

	if (j < 0)
		j = j * (-1);

	_putchar(i + '0');
	return (i);
}

#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: prints the sign of a number
 * @n: The number to be checked
 *
 * Return: 1, 0, -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	if (n == 0)
        {
                _putchar('0');
                _putchar(',');
                _putchar(' ');
                return (0);
        }
	if (n < 0)
        {
                _putchar('-');
                _putchar(',');
                _putchar(' ');
                return (-1);
        }
}

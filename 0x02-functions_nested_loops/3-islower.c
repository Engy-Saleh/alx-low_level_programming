#include "main.h"

/**
 * _islower - entry point
 *
 * Desciption: checks for lowercase character
 *
 * Return: 1 if c is lowercase
 */

int _islower(int c)
{
	int c;

	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}

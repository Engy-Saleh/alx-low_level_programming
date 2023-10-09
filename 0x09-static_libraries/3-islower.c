#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: checks for lowercase character
 * @c: The character to be checked
 *
 * Return: returns 1 if 'c' is lowercase otherwise always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

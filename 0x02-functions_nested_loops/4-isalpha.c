#include "main.h"

/**
 * _isalpha - entry point
 *
 * Description: checks for alphabetic character
 * @c : character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase otherwise return 0
 */

int _isalpha(int c)
{
	int c;

	if ((c >= 'a' && c <= 'z') || (C >= 'A' && C <= 'Z'))
		return (1);
	else
		return (0);
}

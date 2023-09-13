#include "main.h"

/**
 * _abs - Entry point
 *
 * Description: computes the absolute value of an integer
 * @x: The number to be computed
 *
 * Return: the absolute value of an integer (x)
 */

int _abs(int x)
{
	if (x < 0)
		x = (-1) * x;
	return (x);
}

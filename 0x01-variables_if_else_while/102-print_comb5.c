#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int x, y, z, a;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 9 ; y++)
		{
			putchar(' ');
			for (z = 0 ; z <= 9 ; z++)
			{
				for (a = 1 ; a <= 9 ; a++)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}

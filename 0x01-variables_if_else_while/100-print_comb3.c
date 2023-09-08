#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x, y;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 9 ; y++)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x != 8 && y != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

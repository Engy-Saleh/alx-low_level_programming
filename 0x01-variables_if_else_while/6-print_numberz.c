#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all numbers of base 10 use the putchar function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char x;

	for (x = 0 ; x < 10 ; x++)
		putchar(x + '0');
	putchar('\n');
	return (0);
}
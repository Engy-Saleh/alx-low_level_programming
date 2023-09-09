#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0 ; x < 9 ; x++)
		putchar(x + '0');
	for (x = 0 ; x < 5 ; x++)
		putchar(x + 'a');
	putchar('\n');
	return (0);
}

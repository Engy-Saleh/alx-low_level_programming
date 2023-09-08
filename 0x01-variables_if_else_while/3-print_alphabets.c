#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char x, y;

	for (x = 'a' ; x <= 'z' ; x++)
		putchar(x);
	putchar('\n');

	for (y = 'A' ; y <= 'Z' ; y++)
		putchar(y);
	return (0);
}

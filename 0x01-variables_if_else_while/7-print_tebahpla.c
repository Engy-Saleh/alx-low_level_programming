#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char x;

	for (x = 'z' ; x >= 'a' ; x++)
		putchar(x);
	putchar('\n');
	return (0);
}

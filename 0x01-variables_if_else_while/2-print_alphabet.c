#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Write a program that prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		putchar(x + 0);
	putchar('\n');
	return (0);
}

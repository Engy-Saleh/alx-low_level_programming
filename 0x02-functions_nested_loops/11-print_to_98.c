#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * Description: Prints all natural numbers from n to 98
 * @n: The input number
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d",n);
		if (i != 98)
			printf(", ");
	}
	for (i = n; i >= 98; i--)
	{
		printf("%d",n);
		if (i != 98)
			printf(", ");
	}
	printf("\n");
}

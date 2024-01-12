#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int main( int argc, char *argv)
{
	int x = 0, y = 0;

 	if (argc == 2)
	{
	 	x = atoi(argv[1]);
		y = atoi(argv[2]);

		printf("%d\n",x * y);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
}

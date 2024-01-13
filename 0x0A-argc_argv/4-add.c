#include <stdio.h>
#include "main.h"

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int *c, sum = 0;

	if  (argc == 0)
		printf("o\n");

	while (argc -1)
	{
		for (c = argv[argc], *c, c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}

			else
			{
				sum += atoi(argv[argc]);
				printf("%d\n",sum);
			}
		}
	}
	return (0);
}

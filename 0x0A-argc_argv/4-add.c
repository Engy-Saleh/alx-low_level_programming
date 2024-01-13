#include <stdlib.h>
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

    if (argc == 1)
    {
        printf("0\n");
        return 0;
    }

    while (argc > 1)
    {
        for (c = argv[argc]; *c != '\0'; c++)
        {
            if (*c < '0' || *c > '9')
            {
                printf("Error\n");
                return 1;
            }
        }

        sum += atoi(argv[argc]);
        argc--;
        printf("%d\n", sum);
    }

    return 0;
}

#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; dest++)
		x++;

	for (y = 0; src[y] != '\0'; src++)
		y++;

	printf("%c %c\n", dest[x], src[y]);

	dest[x] != '\0';
	return (dest);
}

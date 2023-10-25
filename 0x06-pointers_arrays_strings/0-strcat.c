#include <string.h>
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
	int x = strlen(dest);
	int y = strlen(src);
	
	strcat(x, y);
	
	printf("%s %s\n", x, y);

	x != '\0';
	return (x);
}

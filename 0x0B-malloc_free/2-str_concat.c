#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, k = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s1[k] != '\0')
		 k++;

	concat = malloc(sizeof(char) * (i + k + 1));

	if (concat == NULL)
		return (NULL);

	while (s1 != '\0')
		concat[i] = s1;
		i++;

	while (s2 != '\0')
		concat[k] = s2;
		i++, k++;

	concat[i] = '\0';
	return (concat);
}

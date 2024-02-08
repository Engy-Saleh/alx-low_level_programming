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

	while (s2[k] != '\0')
		 k++;

	concat = malloc(sizeof(char) * (i + k + 1));

	if (concat == NULL)
		return (NULL);

	for (int j = 0; j < i; j++)
		concat[j] = s1[j];

	for (int j = 0; j < k; j++)
		concat[i + j] = s2[j];

	concat[i + k] = '\0';
	return (concat);
}

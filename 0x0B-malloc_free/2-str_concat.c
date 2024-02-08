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
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	int len_s1 = 0, len_s2 = 0;
	
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	char *result = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (result == NULL) // Memory allocation failed
		return NULL;

	for (int i = 0; i < len_s1; i++)
		result[i] = s1[i];

	for (int i = 0; i < len_s2; i++)
		result[len_s1 + i] = s2[i];

	result[len_s1 + len_s2] = '\0';

	return result;
}

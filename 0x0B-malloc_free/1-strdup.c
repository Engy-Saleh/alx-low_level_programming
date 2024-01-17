#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	int i, r = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(str) * char);

	if (p == 0)
		return (NULL)

	for (r = 0; str[r] != '\0'; r++)
		p[r] = str[r];
	return (p[r]);
}

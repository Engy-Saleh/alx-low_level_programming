#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	m = malloc(total_size);

	if (m == NULL)
		return (NULL);

	memset(m, 0, total_size);

	return (m);
}

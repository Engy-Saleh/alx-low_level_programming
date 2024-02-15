#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil) \n");
		return;
	}

	if (d->name == NULL)
		printf("Name is (nil) \n");
	else
		printf("Name is %s \n", d->name);

	printf("Age is %f \n", d->age);

	if (d->owner == NULL)
		printf("Owner is (nil) \n");
	else
		printf("Owner is %s \n", d->owner);
}

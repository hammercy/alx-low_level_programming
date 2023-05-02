#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints the struct dog data type
 * @d: pointer to struct dog data type to be printed.
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nil");
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

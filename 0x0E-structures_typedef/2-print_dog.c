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
		return;
        if (d->name == NULL && d->owner == NULL)
		printf("Name: (nil)\nAge: %f\nOwner: (nil)\n", d->age);
	else if (d->name == NULL)
		printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);
	else if (d->owner == NULL)
		printf("Name: %s\nAge: %f\nOwner: (nil)\n", d->name, d->age);
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

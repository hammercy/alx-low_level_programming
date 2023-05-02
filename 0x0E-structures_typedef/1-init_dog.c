#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize the dog struct data type.
 * @d: pointer to struct dog type data
 * @name: name of the dog
 * @age: ange of the dog
 * @owner: name of the owner of the dog.
 *
 */
void init_dog(struct dog *d, char *name, flaot age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

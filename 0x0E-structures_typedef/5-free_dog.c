#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog -frees the momory hold by dot_t
 * @d: ponter to dog_t type
 *
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

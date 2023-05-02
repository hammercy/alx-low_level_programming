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
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}

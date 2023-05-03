#include <stdlib.h>
#include "main.h"
/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated with a call to malloc:
 *       malloc(old_size).
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes of the new memory block.
 *
 * Return: If new_size == old_size - returns ptr.
 *         If new_size == 0 and ptr is not NULL - returns NULL.
 *         Otherwise - returns a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}

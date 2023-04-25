#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that execute a funtion on arra
 * @array: pointer to the arry to be iterated
 * @size : siz of the array;
 * @action: pointer to a fucntion to perform the operation.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

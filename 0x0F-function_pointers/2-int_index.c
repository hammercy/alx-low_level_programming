#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - search for a num in array
 * @array: pointer to the array to be searched
 * @size: size of the array.
 * @cmp: function the perform the comparison
 *
 * Return: index positin on sucess, -1 when size <= 0  and no match
 * return first index  the first elemt on failure cmp func
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return i;
	}
	return (-1);
}

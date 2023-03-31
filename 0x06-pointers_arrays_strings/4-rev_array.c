#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverse the element of the array
 * @a: pinter to int array
 * @n: size of the integer
 *
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	tmp = 0;
	for (i = 0; i < n/2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}

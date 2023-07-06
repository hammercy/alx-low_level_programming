#include "main.h"

/**
 * binary_to_uint - convert array of string of 0 and 1 to decimal.
 * @b: pointer to zero and ones
 *
 * Return: the number|0-b isnot 1 0r 0 or b = NULL;
 */

unsigned int binary_to_uint(const char *b)
{
	uint mult2 = 1;
	uint i;
	uint inum = 0;
	uint strln = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		strln++;
		mult2 = mult2 * 2;
	}
	i = 0;
	while (i < strln)
	{
		if (b[i] < 48 && b[i] > 49)
			return (0);
		inum = inum + (mult2 * ((int)b[i] - 48));
		mult2 = mult2 / 2;
		i++;
	}
	return (inum);
}

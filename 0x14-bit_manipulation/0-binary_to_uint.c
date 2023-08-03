#include "main.h"

/**
 * binary_to_uint - convert array of string of 0 and 1 to decimal.
 * @b: pointer to zero and ones
 *
 * Return: the number|0-b isnot 1 0r 0 or b = NULL;
 */

uint binary_to_uint(const char *b)
{
	uint mult2 = 1;
	int i;
	uint inum = 0;
	uint strln = 0;
	uint m01;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		strln++;
	for (i = strln - 1; i > -1; i--)
	{
		if (b[i] == '0')
			m01 = 0;
		else if (b[i] == '1')
			m01 = 1;
		else
			return (0);
		inum = inum + (mult2 * m01);
		mult2 = mult2 * 2;
	}
	return (inum);
}

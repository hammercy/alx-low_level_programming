#include "main.h"

/**
 * binary_to_uint - convert array of string of 0 and 1 to decimal.
 * @b: pointer to zero and ones
 *
 * Return: the number on success otherwise 0 if there char that is not 1 0r 0 or b = NULL;
 */

unsigned int binary_to_uint(const char *b)
{
	uint mult2 = 1;
	uint i;
	uint inum = 0;
	uint strln = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		strln++;
		mult2 = mult2 * 2;
	}
	i = 0;
	while(b[i] > 47 && b[i] < 50 && i < strln)
	{
		inum = inum + (mult2 * ((int)b[i] - 48));
		mult2 = mult2/2;
		i++;
	}
	return (inum);
}
		
		
		

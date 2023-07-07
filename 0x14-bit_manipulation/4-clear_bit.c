#include "main.h"
/**
 * clear_bit - set a bit at given index to 0
 * @n: holdes the given number
 * @index: holds the index value of the bit
 *
 * Return: 1 on success or -1 if an error occured.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int msk01, msk02, msk10, msk;
	unsigned int i;

	msk01 = 1;
	msk10 = 1;
	msk02 = 2;
	while (msk02 != 0)
	{
		msk02 <<= 1;
		msk10 <<= 1;
	}

	for (i = 0; i < index; i++)
		msk01 <<= 1;
	if (msk01 == 0)
		return (-1);
	*n = *n & ~msk01;
	msk = *n & msk01;
	if (msk == 0)
		return (1);
	else
		return (-1);
}

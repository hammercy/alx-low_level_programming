#include "main.h"
/**
 * get_bit - return the value of a bit at given index
 * @n: holdes the given number
 * @index: holds the index value of the bit
 *
 * Return: index of the bit or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
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
	msk = n & msk01;
	if (msk == 0)
		return (0);
	else
		return (1);
}

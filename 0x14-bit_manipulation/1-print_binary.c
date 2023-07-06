#include "main.h"
/**
 * print_binary - print binary represenation of a number
 * n: the number to be represented in binary
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int msk01, msk02;
	unsigned long int msk;

	msk01 = 1;
	msk02 = 2;

	while (msk02 != 0)
	{
		msk01 <<= 1;
		msk02 <<= 1;
	}

	while (n != 0)
	{
		msk = n & mask01;
		if (msk == 0)
			_putchar('0');
		else
			_purchar('1');
		n <<= 1;
	}
}

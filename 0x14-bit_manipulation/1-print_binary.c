#include "main.h"
/**
 * print_binary - print binary represenation of a number
 * n: the number to be represented in binary
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int msk01, msk02;
	unsigned long int msk, msk001;
	int strt = 0;

	msk01 = 1;
	msk02 = 2;
	msk001 = 1;

	while (msk02 != 0)
	{
		msk01 <<= 1;
		msk02 <<= 1;
	}

	if (n == 0)
		_putchar('0');
	while (msk001 != 0)
	{
		msk = n & msk01;
		if (msk != 0)
			strt++;
		if (msk == 0 && strt > 0)
			_putchar('0');
		else if (msk != 0 && strt > 0)
			_putchar('1');
		n <<= 1;
		msk001 <<= 1;
	}
}

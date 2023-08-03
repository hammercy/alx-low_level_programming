#include "main.h"
/**
 * flip_bits - return the number flip required to make two number equal
 * @n: holdes the first number
 * @m: holds the second number5-flip_bits.c
 *
 * Return: 1 on success or -1 if an error occured.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int msk01, mskm, mskn;
	unsigned int cnt;

	msk01 = 1;
	cnt = 0;
	while (n != m)
	{
		mskn = n & msk01;
		mskm = m & msk01;
		if (mskn != mskm)
			cnt++;
		n >>= 1;
		m >>= 1;
	}
	return (cnt);
}

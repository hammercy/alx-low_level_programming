#include "main.h"
/**
 * get_endianness - check whether big or little endianness.
 *
 * Return: 0-big 1-little endianness.
 */
int get_endianness(void)
{
	unsigned int *iptr = (unsigned int *)malloc(4);
	short hbyt = 1;
	short lbyt = 8;
	short tmp;

	if (iptr == NULL)
		return (-1);
	*iptr = 0x12345678;
	tmp = (short)iptr[0] ^ hbyt;
	if (tmp == 0)
		return (0);
	tmp = (short)iptr[0] ^ lbyt;
	if (tmp == 0)
		return (1);
	return (-1);
}

#include "main.h"
/**
 * print_binary - print binary represenation of a number
 * @n: the number to be represented in binary
 *
 */

void print_binary(ulint n)
{
	char *iptr;
	int i;
	
	iptr = _dtob(n);
	if (iptr == NULL)
		_putchar('0');
	for (i = 0; iptr[i] != '\0'; i++)
		_putchar(iptr[i]);
}
/**
 * _dtob - change an unsigned long int to binary sequenc of characters.
 * @inum: an integer to be converted to binary.
 *
 * Return: pointer to the start of the binary number.
 */

char *_dtob(ulint inum)
{
	int max_dGt = 31, i;
	char *iptr, *rptr;
	ulint mask = 1;

	iptr = (char *)malloc((max_dGt + 1) * sizeof(char));
	if (iptr == NULL)
		return (NULL);
	
	iptr[max_dGt] = '\0';
	if (inum == 0)
	{
		iptr[max_dGt - 1] = '0';
		rptr = &iptr[max_dGt - 1];
		return (rptr);
	}
	for (i = max_dGt -1; mask != 0; i--)
	{
		if ((mask & inum) == 1)
		{
			iptr[i] = '1';
			rptr = &iptr[i];
		}
		else
			iptr[i] = '0';
		mask = mask << 1;
	}
	return (rptr);
}
		

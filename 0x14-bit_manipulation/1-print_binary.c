#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary represenation of a number
 * @n: the number to be represented in binary
 *
 */

void print_binary(ulint n)
{
	char *iptr, *rptr;
	int i;

	iptr = NULL;
	rptr = _dtob(n, iptr);
	if (rptr == NULL)
		exit(0);
	for (i = 0; rptr[i] != '\0'; i++)
		_putchar(rptr[i]);
	free(iptr);
}
/**
 * _dtob - change an unsigned long int to binary sequenc of characters.
 * @inum: an integer to be converted to binary.
 * @iptr: pointer to z whole malloc allocated memory to be used for freeing
 *
 * Return: pointer to the start of the binary number.
 */

char *_dtob(ulint inum, char *iptr)
{
	int max_dGt = 65, i;
	char *rptr;
	ulint mask = 1, mskd;

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
	for (i = max_dGt - 1; mask >= 1; i--)
	{
		mskd = mask & inum;
		if (mskd == mask)
		{
			iptr[i] = '1';
			rptr = &(iptr[i]);
/*			printf("%c",iptr[i]); */
		}
		else if (mskd == 0)
		{
			iptr[i] = '0';
/*			printf("%c", iptr[i]); */
		}
		mask = mask << 1;
		mskd = 0;
	}
/*	printf("\n"); */
	return (rptr);
}

#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints natural number from n to 98
 * @n: argument
 *
 */
void print_to_98(int n)
{
	int i;

	i = n;
	while (i != 98)
	{
		_putdigit(i);
		_putchar(',');
		_putchar(' ');
		if (i > 98)
			i--;
		else if (i < 98)
			i++;
		else
			break;
	}
	_putdigit(98);
}
/**
 * _putdigit - print number with putchar function
 * @m: input number to be printed
 */
void _putdigit(int m)
{
	int  i, x, y, j;
	char x[100];

	y = 0;
	if (m < 0)
		j = -1 * m;
	else
		j = m;
	while (j > 0)
	{
		i = j % 10;
		j = j / 10;
		x[y] = 48 + i;
		y++;
	}

	if (m < 0)
		x[y] = '-';
	else
		y = y - 1;
	while (y > -1)
	{
		_putchar(x[y]);
		y--;
	}
}

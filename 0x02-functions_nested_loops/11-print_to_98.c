#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints natural number from n to 98
 * @n: argument
 *
 */
void print_to_98(int n)
{
	int m, j, dgt, i;

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
	int  i;

	while (m > 0)
	{
		i = m % 10;
		m = m / 10;
		_putchar (i + 48);
	}
}

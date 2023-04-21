#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints the number in the args
 * @separator: separator charactor btn numbers
 * @n: number of arguments
 * ...: variable arguments
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		_putint(va_arg(args, int));
		if (separator != NULL)
		{
			for (j = 0; separator[j] != '\0'; j++)
				_putchar(separator[j]);

		}
	}
	_putint(va_arg(args, int));
	_putchar('\n');
	va_end(args);

}
/**
 * _putint - print integers
 * @a: integer to be printed
 *
 */

void _putint(int a)
{
	const unsigned int maxdigit = 10;
	unsigned int i, cntdigit, mult = 1;
	int c, b ;

	if (a < 0)
		b = -1 * a;
	else
		b = a;
	cntdigit = maxdigit;
	for (i = 0; i < maxdigit - 1; i++)
		mult = mult * 10;
	for (i = 0; i < maxdigit; i++)
	{
		if ((b / mult) != 0)
			break;
		cntdigit = cntdigit - 1;
		b = b % mult;
		mult = mult / 10;
	}
	if (a < 0)
	{
		a = -1 * a;
		_putchar('-');
	}
	if (a == 0)
	{
		_putchar('0');
	}
	else
	{
		for (i = cntdigit; i > 0; i--)
		{
			c = a / mult;
			_putchar((48 + c));
			a = a % mult;
			mult = mult / 10;
		}
	}
}

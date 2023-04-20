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
	for (i = 0; i < n; i++)
	{
		_putint(va_arg(args, int));
		for (j = 0; separator[j] != '\0'; j++)
			_putchar(separator[j]);
	}
	_putchar('\n');
	va_end(args);
}

void _putint(int a)
{
	const unsigned int maxdigit = 10;
	unsigned int i, cntdigit, mult = 1;

	cntdigit = maxdigit;
	for (i = 0; i < maxdigit; i++)
		mult = mult * 10;
	for (i = 0; i < maxdigit; i++)
	{
		if ((a % mult) != 0)
			break;
	        --cntdigit;
		mult = mult / 10;
	}
	for (i = cntdigit; i > 0; i--)
	{
		_putchar(48 + (a / mult));
		a = a % mult;
		mult = mult / 10;
	}
}

#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print number characters
 *
 */
void print_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

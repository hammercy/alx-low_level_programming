#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print lowercase alphabet 10x
 */

void print_alphabet_x10(void)
{
	int i, j;
	int str;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			str = 97 + j;
			_putchar(str);
		}
		_putchar('\n');
	}
}

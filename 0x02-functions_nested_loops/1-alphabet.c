#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints lowercase alphabet
 *
 */

void print_alphabet(void)
{
	int i;
	int x;
		for (i = 0; i < 26; i++)
	{
		x = i + 97;
		_putchar(x);
	}
	return;
}

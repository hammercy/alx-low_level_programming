#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints table the contains multiple of 1-9
 *
 */
void times_table(void)
{
	int i, j, x;
	int xc, xx, xy;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = i * j;
			if (x < 10)
			{
				xc = 48 + x;
				_putchar(xc);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				xx = 48 + x / 10;
				xy = 48 + x % 10;
				_putchar(xx);
				_putchar(xy);
				_putchar(',');
				_putchar(' ');
			}
		}
		_purchar('$');
		_putchar('\n');
	}
}

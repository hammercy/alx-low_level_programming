#include <stdio.h>
#include "main.h"
/**
 * times_table - Prints table the contains multiple of 1-9
 */
void times_table(void)
{
	int i, j, x;
	int xx, xy;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = i * j;
			xy = 48 + x % 10;
			xx = x / 10;
			if (xx == 0 && j != 0)
			{
				xx = 32;
				_putchar(xx);
			}
			else if (xx != 0)
			{
				xx = 48 + xx;
				_putchar(xx);
			}
			_putchar(xy);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}

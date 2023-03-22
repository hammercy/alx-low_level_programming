#include <stdio.h>
#include "main.h"

/**
 * jack_bauer -Prints Every minut of 24hrs
 *
 */

void jack_bauer(void)
{
	int i, j;
	int hx, hy;
	int mx, my;

	for (i = 0; i < 24; i++)
	{
		hx = 48 + (i / 10);
		hy = 48 + (i % 10);
		for (j = 0; j < 59; j++)
		{
			mx = 48 + (j / 10);
			my = 48 + (j % 10);
			_putchar(hx);
			_putchar(hy);
			_putchar(':');
			_putchar(mx);
			_putchar(my);
		}
	}
}

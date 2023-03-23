#include <stdio.h>
#include "main.h"

/**
 * more_numbers- print numbers 0-14
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar(49);
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}

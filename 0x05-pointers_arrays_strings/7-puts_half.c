#include <stdio.h>
#include "main.h"

void puts_half(char *str)
{
	int strlen, i;

	strlen = _strlen(str);
	if (strlen % 2 == 0)
		i = strlen / 2;
	else
		i = (strlen / 2) + 1;
	for ( ; i < strlen; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
	
}

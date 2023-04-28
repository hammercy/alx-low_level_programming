#include <stdio.h>
#include "main.h"


/**
 * _isupper - Checks wether a character is uppercase or not
 * @c : a character
 *
 *Return: 1-upppercase  0-lowercase
 */
int _isupper(int c)
{
	if (c  > 64 && c < 91)
		return (1);
	else
		return (0);
}

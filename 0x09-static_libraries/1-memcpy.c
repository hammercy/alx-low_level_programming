#include <stdio.h>
#include  "main.h"

/**
 * _isdigit - check is character is a digit
 * @c: an integer
 *
 * Return: 1-digit, 0-char
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

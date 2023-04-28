#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks whether a character is alphabet
 *@c: Character to be checked
 *
 *Return: 1 if its alphabet 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && 91))
		return (1);
	else
		return (0);
}

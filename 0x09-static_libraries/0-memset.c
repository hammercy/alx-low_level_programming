#include <stdio.h>
#include "main.h"

/**
 * _memset - assing byte b to each elements of thae array
 * @s: pointer to array of char
 * @b: char data type
 * @n:  size of array
 *
 *Return: returns pointer to the char array;
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);

}

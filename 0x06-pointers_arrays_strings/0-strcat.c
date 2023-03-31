#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: pointer to destination string- where the src is copied to
 * @src: pointer to source string- the string to be copied to dest
 *
 *Return: pointer of the concantnated sting- dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	int  n, m;

	j = 0;
	n = sizeof(dest);
	m = sizeof(src);
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (i = i; j < m; i++)
	{
			dest[i] = src[j];
			j++;
	}
	dest[i] = '\0';
	return (dest);
}

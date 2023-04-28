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

	for (i = 0; dest[i] != '\0'; i++)
		i = i;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
		i++;
	}

	return (dest);
}

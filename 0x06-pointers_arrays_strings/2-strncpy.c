#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies string from src to dest
 * @dest: pionter to string for  dest
 * @src: pointer to string for src
 * @n : number of characters to be copied
 *
 * Return: dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, k;
	int m;

	m = sizeof(dest);
	k = sizeof(src);
	i = 0;
	while (i < n && i < m && i < k)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

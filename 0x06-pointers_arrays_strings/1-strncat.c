#include <stdio.h>
#include "main.h"

/**
 * _strncat - copy n characters from  src string to dest string
 * @dest: pointer to destination string
 * @src:  Pointer to src string to be copied
 * @n: number of characters to be copied
 *
 *Return: dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i , j;
	int m, k;

	m = sizeof(dest);
	k = sizeof(src);
	i = 0;
	j = 0;
	while  (i < m && j < n && j < k)
	{
		if (dest[i] != '\0')
		{
			i++;
			continue;
		}
		else
		{
			dest[i] = src[j];
			j++
		}
	}
	return (dest);
}

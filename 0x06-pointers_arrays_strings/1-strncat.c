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
	int i, j;
	int m, k;

	m = _strlen(dest);
	k = _strlen(src);
	i = m;
	j = 0;
	while  (j < n && j < k)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
/**
 * _strlen - counts the character in string array
 * @s: pointer to a string
 *
 * Return: strlen- the length of the string array
 */
int _strlen(char *s)
{
	int strlen;

	strlen = 0;
	while (*(s + strlen) != '\0')
	{
		strlen++;
	}

	return (strlen);

}

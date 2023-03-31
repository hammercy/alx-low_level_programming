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
	int m;
	int n;

	j = 0;
	m = _strlen(src);
	n = _strlen(dest);
	i = n;
	while (j < m)
	{
		*(dest + i) = *(src + j);
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
/**
 * _cntnull - countes the null character in string
 * @str: pointer to the string
 * @n:  index for the start of null character
 *
 * Return: nl - number of nul characters
 */
int _cntnull(char *str, int n)
{
	int nl;

	nl = n;
	while (*(str + nl) == '\0')
	{
		nl++;
	}
	return (nl);
}

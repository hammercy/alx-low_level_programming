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

	k = _strlen(src);
	i = 0;
	while (i < n)
	{
		if (i < k + 1)
			dest[i] = src[i];
		else
			dest[i] = '\0';
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

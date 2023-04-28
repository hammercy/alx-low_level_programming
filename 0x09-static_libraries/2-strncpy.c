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
	int i;

	if (dest == NULL || src == NULL)
		return (NULL);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

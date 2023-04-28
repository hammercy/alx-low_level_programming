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

	if (dest == NULL || src == NULL)
		return (NULL);
	for (i = 0; dest[i] != '\0'; i++)
		i = i;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}

#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copies n bytes from memory are stc to dest
 * @dest: pointer to destintion memory
 * @src:  pointer to src memory
 * @n:    size of memomry to be copied
 *
 * Return: dest- pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
 	}
	return (dest);
}

#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copy string from src to dest
 * @dest: Pointer - destination of the copy
 * @src:  Pointer - source of the copy
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	if (dest != NULL && src != NULL)
	{
		while (*src != '\0')
		{
			*(dest + i) = *(src + i);
			i++;
		}
		*(dest + i) = '\0';
	}

	return (dest);
}

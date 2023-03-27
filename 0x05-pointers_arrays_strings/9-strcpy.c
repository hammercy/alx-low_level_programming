#include <stdio.h>
#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*src != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + 1) = '\0';

	return (dest); 
}

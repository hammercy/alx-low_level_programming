#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copy string from src to dest
 * @dest: Pointer - destination of the copy
 * @src:  Pointer - source of the copy
 *
 * Return: *dest -pointer the destination array
 */
char *_strcpy(char *dest, char *src)
{
	int  i;

	i = 0;
/*
 *	strlns = _strlen(src);
 *	strlnd = _strlen(dest);
 *	printf("array len src = %d\n", strlns);
 *	printf("array len dest = %d\n", strlnd);
 */
	if (dest != NULL && src != NULL)
	{
		while (*(src + i) != '\0')
		{
			*(dest + i) = *(src + i);
			i++;
		}
		*(dest + i) = '\0';
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
	int i;
	int strlen;

	i = 0;
	strlen = 0;
	while (*(s + i) != '\0')
	{
		strlen = strlen + 1;
		i++;
	}
	return (strlen);
}

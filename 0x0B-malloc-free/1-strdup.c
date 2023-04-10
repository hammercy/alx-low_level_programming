#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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

/**
 * _strdup - copy string to another pointer  and return it
 * @str: string pointer to be copied
 *
 * Return: pointer to  new created string
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int size = _strlen(str);
	char *strptr = (char *) malloc(size * sizeof(char));

	if (strptr = NULL)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
			strptr[i] =   str[i];

	}

	return (strptr);
}

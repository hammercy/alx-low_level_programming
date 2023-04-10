#include <stdlib.h>
#include <stdio.h>
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
 * str_concat - concatinates two strings
 * @s1: 1st str over which- 2nd str appended
 * @s2: 2nd str to be copied
 *
 * Return: 1st str
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int lens1 = _strlen(s1);
	unsigned int lens2 = _strlen(s2);
	unsigned int i;
	unsigned int lenptr = lens1 + lens2;
	char *strptr = (char *) malloc(lenptr * sizeof(char));

	if (strptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < lenptr; i++)
		{
			if (i < lens1)
				strptr[i] = s1[i];
			else
				strptr[i] = s2[i - lens1];
		}
		return (strptr);
	}
}

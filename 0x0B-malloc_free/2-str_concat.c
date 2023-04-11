#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * str_concat - concatinates two strings
 * @s1: 1st str over which- 2nd str appended
 * @s2: 2nd str to be copied
 *
 * Return: 1st str
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int lens1, lens2, i, lenptr;
	char *strptr;

	lens1 = lens2 = 0;
	if (s1 == NULL && s2 == NULL)
	{

	}
	else if (s1 == NULL)
	{
		lens2 = _strlen(s2);
	}
	else if (s2 == NULL)
	{
		lens1 = _strlen(s1);
	}
	else
	{
		lens1 = _strlen(s1);
		lens2 = _strlen(s2);
	}
	lenptr = lens1 + lens2;
	strptr = (char *) malloc((lenptr + 1) * sizeof(char));
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

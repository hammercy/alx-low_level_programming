#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * strtow - splits a string into a word
 * @str: point to the string
 * Return: string to 2d-arry of words
 */
char **strtow(char *str)
{
	unsigned int i = 0, j = 0, k = 0, iwrd, row = 0, col = 0;
	char **wrdptr;

	row = _cntwrds(str);
	if (row == 0)
		return (NULL);
	wrdptr = (char **) malloc((row + 1) * sizeof(char *));
	if (wrdptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] == ' ' && str[i + 1] != ' ' && col != 0) || (col != 0 && str[i + 1] == '\0'))
		{
			wrdptr[j] = (char *) malloc((col + 1) * sizeof(char));
			if (wrdptr[j] == NULL)
				return (NULL);
			for (k = 0; k < col; k++)
				wrdptr[j][k] = str[iwrd + k];
			wrdptr[j][k] = '\0';
			col = 0;
			j++;
		}
		if (str[i] != ' ')
			col++;
		if(col == 1)
			iwrd = i;
	}
	wrdptr[j + 1] = NULL;
	return (wrdptr);
}
/**
 * _cntwrds - counts words in a string
 * @str: string to be counted
 *
 * Return: number of words
 */
int _cntwrds(char *str)
{
	int wcnt, i, j, nspc;

	wcnt = 0;
	nspc = 0;
	if (str == NULL)
		return (0);
	else if (_strlen(str) == 0)
		return (0);
	else if (str[1] == '\0' && (str[0] == ' ' || str[0] == '\b'))
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			for (j = i + 1; str[j] == ' '; j++)
				nspc++;
			if (str[j] != '\0'&& i != 0 )
				wcnt++;
			i = j;
		}
	}
	if (nspc > 1 && wcnt == 0)
		return (0);
	wcnt++;
	return (wcnt);
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

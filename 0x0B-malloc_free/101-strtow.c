#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * strtow - splits a string into a word
 * @str: point to the string
 *
 * Return: string to 2d-arry of words
 */
char **strtow(char *str)
{
	unsigned int i = 0, j = 0, k = 0;
	unsigned int row = 0, col = 0;
	char **wrdptr;

	row = _cntwrds(str);
	if (row == 0)
		return (NULL);
	wrdptr = (char **) malloc((row + 2) * sizeof(char *));
	if (wrdptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		col++;
		if (str[i] == ' ')
		{
			wrdptr[j] = (char *) malloc((col + 1) * sizeof(char));
			if (wrdptr[j] == NULL)
				return (NULL);
			for (k = 0; k < col; k++)
				wrdptr[j][k] = str[i - col + k];
			wrdptr[j][k] = '\0';
			col = 0;
			j++;
		}
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
	int cnt, i;

	cnt = 0;
	if (str == NULL)
		return (0);
	else if (_strlen(str) == 0)
		return (0);
	else if (_strlen(str) == 1 && (str[0] == ' ' || str[0] == '\b'))
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			cnt++;
	}
	cnt++;
	return (cnt);
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

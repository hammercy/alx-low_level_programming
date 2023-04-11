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

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			row++;
	}
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

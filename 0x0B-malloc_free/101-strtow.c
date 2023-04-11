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

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			row++;
		i++;
	}
	i = j = 0;
	while (str[i] != '\0' && j < row + 1)
	{
		col = 0;
		if (str[i] != ' ')
		{
			col++;
		}
		else
		{
			wrdptr[j] = (char *) malloc(col * sizeof(char));
			k = 0;
			while (k < col)
			{
				wrdptr[j][k] = str[i - col + k];
				k++;
			}
			wrdptr[j][k] = '\n';
		}
		j++;
	}
}

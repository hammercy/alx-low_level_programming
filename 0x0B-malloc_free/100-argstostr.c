#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * strtow - concatenates all arguments of ur program
 * @ac: number of arguments
 * @av: point to 2d-string arguments
 *
 * Return: prt-to-concatnated
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;

	char *strptr;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			k++;
			j++;
		}

	}

	strptr = (char *)malloc(k * sizeof(char));
	if (strptr == NULL)
		return (NULL);
	k = 0;
	for  (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			strptr[k] = av[i][j];
			j++;
			k++;
		}
		strptr[k] = '\n';
	}
	return (strptr);
}

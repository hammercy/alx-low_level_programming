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
	int i;

	char **strptr = (char **)malloc(ac * sizeof(char *));

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		strptr[i] = (char *)malloc(j * sizeof(char));
	}
	for  (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0' && av[i][j] != ' ')
		{
			strptr[i][j] = av[i][j];
			j++;
		}
		strptr[i][j] = '\n';
	}
	return (strptr);
}

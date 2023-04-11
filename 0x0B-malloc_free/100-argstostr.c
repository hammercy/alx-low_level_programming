#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * strtow - concatenates all arguments of ur program
 * @ac: number of arguments
 * @av: point to 2d-string arguments
 *
 * Description: the function arguments are bundled
 * in string togther then they are separated using neline
 * Return: prt-to-concatnated
 */
char *argstostr(int ac, char **av)
{
	int i, j, memsize = 0, ms = 0;
	char *strptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			j = j;
		memsize = memsize + j + 1;
	}
	strptr = (char *)malloc((memsize + 1) * sizeof(char));
	if (strptr == NULL)
		return (NULL);
	for  (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			strptr[ms] = av[i][j];
			ms++;
		}
		strptr[ms] = '\n';
		ms++;
	}
	strptr[ms + 1] = '\0';
	return (strptr);
}

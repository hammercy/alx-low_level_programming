#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compatres two string
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: int difference between the mismatch characters
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int m;

	m = 0;
	for (i = 0;, i < m && i < n; i++)
	{
		m =  s1[i] - s2[i];
		if (m > 0)
			return (m);
		else if(m < 0)
			return (m);
		else
			continue;
	}
	return (0);
}

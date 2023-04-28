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
	int i, m;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		m =  s1[i] - s2[i];
		if (m > 0 || m < 0)
			return (m);
		i++;
	}
	return (m);
}

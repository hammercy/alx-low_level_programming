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
	int i, k;
	int m, n;

	k = _strlen(s1);
	n = _strlen(s2);
	i = 0;
	while (i < k || i < n)
	{
		m =  s1[i] - s2[i];
		if (m > 0 || m < 0)
			return (m);
		i++;
	}
	return (m);
}
/**
 * _strlen - counts the character in string array
 * @s: pointer to a string
 *
 * Return: strlen- the length of the string array
 */
int _strlen(char *s)
{
	int strlen;

	strlen = 0;
	while (*(s + strlen) != '\0')
	{
		strlen++;
	}

	return (strlen);

}

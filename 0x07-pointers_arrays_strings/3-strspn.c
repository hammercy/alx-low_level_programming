#include <stdio.h>
#include "main.h"

/**
 * _strspn - finds byte in accept  in string s
 * @s: string pointer- where char accept is to be found
 * @accept: pointer to char to be looked for
 *
 * Return: number of bytes that two string are equal.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);

	}
	return (c);
}

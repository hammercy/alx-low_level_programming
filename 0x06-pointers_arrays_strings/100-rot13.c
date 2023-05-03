#include <stdlib.h>
#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: pointer to string.
 *
 * Return: endcoded string's pointer.
 */
char *rot13(char *s)
{
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; input[j]; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
				break;
			}
		}
	}

	return (s);
}

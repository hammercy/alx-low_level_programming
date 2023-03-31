#include <stdio.h>
#include "main.h"

/**
 * leet  - encode a string into 1337
 * @str:  spinter to string to be encoded
 *
 * Descriptions: a and A  to 4, e and E to 3, o and O to 0
 * t and T to 7, and l and L to 1.
 * Return: str -pointer to endcodes string.
 */
char *leet(char *str)
{
	int i, j;
	char arrc[] = "aAeEoOtTlL";
	char arrn[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == arrc[j])
				str[i] = arrn[j];
		}
		i = i + 1;
	}
	return (str);
}

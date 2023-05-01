#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat- concatenates n character of a string to another string
 * @s1: pointer to the first stirng inwhich the 2nd string is to be append to
 * @s2: pointer to the 2nd string that goint to be append to the 1st string.
 * @n: number of char to be appended
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		j  = 0;
	str = malloc(sizeof(char) * (i + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}

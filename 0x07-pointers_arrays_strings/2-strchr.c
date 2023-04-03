#include <stdio.h>
#include "main.h"
/**
 * _strchr -  return the first occurance c in string
 * @s: string pointer to s
 * @c: char to be found
 *
 * Return: pionter to char on success or NULL on failer
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *ptrchr;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	ptrchr = &s[i];
	return (ptrchr);
}

#include "main.h"

/**
 * wildcmp - compare two strings
 * @s1: fist string
 * @s2: second string
 *
 * Return: 1 if identical 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		if (*s1 == '\0')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (*s1 == '\0')
	{
		return (0);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}

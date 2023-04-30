#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - counts the string lenghth without
 * @s: string for which the length is to be calculated.
 *
 * Return: string length.
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	int cnt;

	if (s == NULL || s[i] == '\0')
	{
		cnt = 0;
		return (cnt);
	}
	if (s[i] != '\0')
	{
		cnt =  _strlen_recursion(&s[i + 1]);
		cnt++;
	}
	return (cnt);
}

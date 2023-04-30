#include "main.h"
#include <string.h>
/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be checked.
 *
 * Return: 1 if it palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	if (len <= 1)
	{
		return (1);
	}
	if (*s == *(s + len - 1))
	{
		*(s + len - 1) = '\0';
		return (is_palindrome(s + 1));
	}
	return 0;
}

#include "main.h"

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be checked.
 *
 * Return: 1 if it palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	int len, i;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
		len++;
	if (len <= 1)
		return (1);
	else if (*s != *(s + len - 1))
		return (0);
	*(s + len - 1) = '\0';
	return (is_palindrome(s + 1));
}

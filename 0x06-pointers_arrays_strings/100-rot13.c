#include <stdlib>
#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: pointer to string.
 *
 * Return: endcoded string's pointer.
 */
char *rot13(char *s)
{
	int i;
	char *ptr = s;

	while (*s)
	{
		if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
			*s += 13;
		else if ((*s >= 'n' && *s <= 'z') || (*s >= 'N' && *s <= 'Z'))
			*s -= 13;
		s++;
	}
	return (ptr);
}

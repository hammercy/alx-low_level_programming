#include <stio.h>
#include "main.h"
/**
 * rev_string - Reverse the  string
 * @s: Pointer to the string to be reversed
 *
 */
void rev_string(char *s)
{
	int strlen, i;
	char tmp;

	strlen = _strlen(s);
	for (i = 0; i < strlen/2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + (strlen - 1) - i);
		*(s + (strlen - 1) - i) = tmp;
	}
}

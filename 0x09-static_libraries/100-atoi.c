#include "main.h"
/**
 * _atoi - convert string(ascii) number to decimal
 * @str - pointer to string that contain the number.
 *
 * Return: decimal number.
 */
int _atoi(char *s)
{
	int mult = 0;
	int sign = 1;
	int j;

	if (s[0] == '-')
		sign = -1;

	for (j = 1; s[j] != '\0'; j++)
	{
		if (s[j] < '0' || s[j] > '9')
			return 0;
		mult = mult * 10 + s[j] - '0';
	}
	return (sign * mult);
}

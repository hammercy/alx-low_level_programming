#include <stdio.h>
#include "main.h"

/**
 * print_sign - Print the sign of number
 * @n: The number to be checked
 *
 * Description: The function check the sign of a number and print its sing
 * to the std output
 * Return: Returns 1 for positive 0 for zero and -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
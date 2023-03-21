#include <stdio.h>
#include "main.h"

/**
 * _abs - Calculate the absolute value of a number
 * @n: The number whose abs value is to be determined
 *
 * Return: the  absolute value
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}

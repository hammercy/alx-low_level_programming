#include "main.h"

/**
 * _sqrt_recursion - calculates sqrt of a number
 * @n: number which its sqrt is to be calculated.
 *
 * Return: square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (_sqrt_recursion(n / 4) * 2);
}

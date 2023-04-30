#include "main.h"

/**
 * factorial -  calculate factorial of number
 * @n: the number its factorial to be solved.
 *
 * Return: n!.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

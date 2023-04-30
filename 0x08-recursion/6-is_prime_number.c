#include "main.h"

/**
 * is_prime_number - check is a number is prime
 * @n: natural number to bechecked.
 *
 * Return: 1 if prime 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}

/**
 * is_prime - helper function for is_prime_number
 * @n: the number to check
 * @i: the current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n, int i)
{
	if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (is_prime(n, i + 1));
}

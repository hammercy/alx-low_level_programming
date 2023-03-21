#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints number's last digit
 * @n: The number whose last digit to be calculated
 *
 * Return: The last digit 0-9
 */
int print_last_digit(int n)
{
	int tmp;

	tmp = n % 10;
	return (tmp);
}

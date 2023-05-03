#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - add two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divid two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the division
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - calculate mod of a by b
 * @a: first integer
 * @b: second integer
 *
 * Return: the modulated result
 */

int op_mod(int a, int b)
{
	return (a % b);
}

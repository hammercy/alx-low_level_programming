#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
/**
 * sum_them_all - adds all the arguments
 * @n: the number of argument variables
 * @...: variable arguments
 *
 * Return: sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - prints string with a separtor char
 * @separator: holds the separator char to strings
 * @n: number of arguments in the variable args
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *ptrstr;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		ptrstr = va_arg(args, char *);
		if (ptrstr == NULL)
			ptrstr = "(nil)";
		if (separator != NULL)
			printf("%s %s", ptrstr, separator);
		else
			printf("%s", ptrstr);
	}
	ptrstr = va_arg(args, char *);
	if (ptrstr == NULL)
		ptrstr = "(nil)";
	printf("%s\n", ptrstr);
}

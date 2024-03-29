#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints any format passed
 * @format: a string that holdes types of arguments
 * @...: a variable argument
 *
 * Description: format is list type of arguments passed to
 * the function such as c:char, i:integer, f:float, s:char*
 * if there any other char should be ignored.
 */
void print_all(const char * const format, ...)
{
	unsigned int j;
	va_list args;
	char *ptrstr;

	va_start(args, format);
	j = 0;
	while (format[j + 1] != '\0')
	{
		switch (format[j])
		{
		case 'c':
			printf("%c, ", va_arg(args, int));
			break;
		case 'i':
			printf("%d, ", va_arg(args, int));
			break;
		case 'f':
			printf("%f, ", va_arg(args, double));
			break;
		case 's':
			ptrstr = va_arg(args, char *);
			if (ptrstr == NULL)
			{
				printf("%s, ", "nil");
				break;
			}
			printf("%s, ",  ptrstr);
			break;
		}
		j++;
	}
	switch (format[j])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			ptrstr = va_arg(args, char *);
			if (ptrstr == NULL)
			{
				printf("This last: %s", "nil");
				break;
			}
			printf("%s", ptrstr);
			break;
		}
	printf("\n");
	va_end(args);
}

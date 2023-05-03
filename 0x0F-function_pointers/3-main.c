#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <stdarg.h>
/**
 * main - perform simple operation over two integers
 * @argc -integer that count the number of arguments
 * @argv -pointer to string that contain arguments the the operaton
 *
 * Description: calcuate num1 operator numb2
 * operator is one of the following
 * if the number of arguments is wrong, print Error, followed by a new line,
 * and exit with the status 98
 * if the operator is none of the above, print Error, followed by a new line,
 * and exit with the status 99
 * if the user tries to divide (/ or %) by 0, print Error, followed by a new
 * line, and exit with the status 100
 *
 * Return: 1 on success otherwsie 98, 99, 100 depending on the error.
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", func(a,b));
	return (0);
}

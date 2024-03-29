#include <stdio.h>
#include "main.h"

/**
 * main - print 1-100 number
 *
 * Description: This functions prints number between 1-100
 * followed by new line. But for multiple of three , and
 * five it prints fizz and buzz respectively. For multiply
 * Return: 0 -success
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("Fizz");
			printf(" ");
		}
		else if ((i % 3 != 0) &&  (i % 5 == 0))
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}

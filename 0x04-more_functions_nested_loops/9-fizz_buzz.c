#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - print 1-100 number
 *
 * Description: This functions prints number between 1-100
 * followed by new line. But for multiple of three , and
 * five it prints fizz and buzz respectively. For multiply
 * both it prints fizzbuzz.
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			puts("Fizzbuzz ");
		else if ((i % 3 == 0) && (i % 5 != 0))
			puts("Fizz ");
		else if ((i % 3 != 0) &&  (i % 5 == 0))
			puts("Buzz ");
		else
			printf("%d ", i);
	}
}

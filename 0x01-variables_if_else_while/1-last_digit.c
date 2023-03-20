#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Find the last digit and ch whether it grater than 5
 *
 * Return: Always 0  (success)
 */
int main(void)
{
	int n;
	int tmp;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	tmp = n % 10;
	if (tmp >= 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, tmp);
	else if (tmp == 0)
		printf("Last digit of %d is %d and is 0\n", n, tmp);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, tmp);
	return (0);
}

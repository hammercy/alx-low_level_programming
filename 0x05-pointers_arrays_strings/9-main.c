#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	char S1[98];
	char *prt;

	prt = _strcpy(S1, "First, solve the problem. Then, write the code\n");
	printf("%s", S1);
	printf("%s", prt);
	return (0);
}

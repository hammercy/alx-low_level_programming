#include <stdio.h>
#include "main.h"

/**
 * swap_int - swapts two integers
 *@a: pointer to first operand
 *@b: Pointer to sencond operand
 *
 */

void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

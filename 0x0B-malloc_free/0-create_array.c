#include <stdlib.h>
#include <stdio.h>
#inclue  "main.h"

/**
 * create_array - initialze the array to a char c
 * @size: size of the array
 * @c:  char containingg  an intitialize for array
 *
 * Return:  pointer  to   intialized  array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int  i;
	char *strptr = (char *) malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		strptr[i] = c;
	}

	return (strptr);
}

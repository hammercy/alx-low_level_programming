#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - this function prints a name
 * @name: the name to be printed.
 * @f: function that prints the name.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

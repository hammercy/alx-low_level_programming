#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the name of the program
 * @argc: number command line arguments
 * @argv: pointer to sting array  - command line arguments
 *
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	int i = argc;

	i = 0;
	printf("%s\n", argv[0]);
	return (i);
}

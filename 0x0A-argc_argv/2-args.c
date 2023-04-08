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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

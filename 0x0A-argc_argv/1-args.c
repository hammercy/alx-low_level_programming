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
	(void)argv;
        printf("%d\n", argc - 1);
        return (0);
}

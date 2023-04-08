#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the name of the program
 * @argc: number command line arguments
 * @argv: pointer to sting array  - command line arguments
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	int c;

	c = atoi(argv[0]);
        printf("%d\n", argc);
        return (c);
}

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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		return (0);
	}
}

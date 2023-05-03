#include <stdio.h>
#include <stdlib.h>
/**
 * main - the program prints the opcode of its own function.
 * @argc: the number of arguments
 * @argv: pointer to string array of the arguments.
 *
 * Description: the opcodes should be printed in hexadecimal, lowercase
 * each opcode is two char long
 * If the number of argument is not the correct one,it exit  1
 * If the number of bytes is negative, it exit with status 2
 * Return: 0 on success  1 or 2 otherwise depending on the error.
 */
int main(int argc, char **argv)
{
	int i;
	int bytes;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	ptr = (unsigned char *)main;
	for (i = 0; i < bytes; i++)
	{
		printf("%02x", ptr[i]);
		if (i != bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}

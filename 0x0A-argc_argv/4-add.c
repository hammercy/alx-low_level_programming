#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - sum the arguments
 * @argc: number command line arguments
 * @argv: pointer to sting array  - command line arguments
 *
 * Return: always 0 on success 1 on error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (strcmp(argv[i], "0") != 0 && atoi(argv[i]) == 0 &&  atoi(argv[i]) < 0)
			{

				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);

	}

	return (0);
}

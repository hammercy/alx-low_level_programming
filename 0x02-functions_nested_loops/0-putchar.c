#include <stdio.h>

/**
 * main - Print _putchar string
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char  tmp;
	char str[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		tmp = str[i];
		putchar(tmp);
	}
	putchar('\n');
	return (0);
}

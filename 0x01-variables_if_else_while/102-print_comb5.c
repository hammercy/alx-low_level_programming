#include <stdio.h>

/**
 * main - Print unique combination of four digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;
	int k;
	int y;
	int x;
	int z;

	for  (j = 0; j < 99; j++)
	{
		for (k = j + 1; k < 100; k++)
		{
			i = 48 + (j / 10);
			y = 48 + (j % 10);
			x = 48 + (k / 10);
			z = 48 + (k % 10);
			putchar(i);
			putchar(y);
			putchar(' ');
			putchar(x);
			putchar(z);
			if (i == 57 && y == 56 && x == 57 && z == 57)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
	return (0);
}

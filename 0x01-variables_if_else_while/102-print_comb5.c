#include <stdio.h>

/**
 * main - Print the combination of three digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;
	int k;
	int y;

	for (i = 48; i < 58; i++)
	{
		for (y = 48; y < 57; y++)
		{
			for  (j = i; j < 58; j++)
			{
				for (k = y + 1; k < 58; k++)
				{
					putchar(i);
					putchar(y);
					putchar(' ');
					putchar(j);
					putchar(k);
					if (i == 57 && y == 56 && j == 57 && k == 57)
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
		}

	}

	return (0);
}

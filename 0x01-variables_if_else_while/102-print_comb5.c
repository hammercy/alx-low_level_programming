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
	int cnt;

	for (i = 48; i < 58; i++)
	{
		for (y = 48; y < 57; y++)
		{
			cnt = (y - 48)+ 1;
			for  (j = i; j < 58; j++)
			{
				for (k = (cnt % 10) + 48; k < 58; k++)
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
					cnt++;
				}
			}
		}

	}

	return (0);
}
